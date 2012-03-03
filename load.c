#include "ruby.h"
#include "prolog.h"
#include <dlfcn.h>

void *sl;
VALUE load_test(){
  void (*man)()=dlsym(sl,"main");
  man();
  return Qnil;
}

void** methods[100];
VALUE set_sl(VALUE self,VALUE lib){
  sl=dlopen(RSTRING_PTR(lib),RTLD_NOW);
  return Qnil;
}
char *class_names[100];int clasno;
obj_Class class_obj[100];
VALUE add_class(VALUE self,VALUE name){int i;
  char *clasname=RSTRING_PTR(name);
  if (!clasno&& strcmp(clasname,"Class")) add_class(self,rb_str_new2("Class"));
  for (i=0;i<clasno;i++)
    if (!strcmp(clasname,class_names[i])) return INT2FIX(i);
  class_names[clasno]=strdup(clasname);
  methods[clasno]=calloc(sizeof(void *),100);
  class_obj[clasno]=Class(clasname);
  clasno++;
  return INT2FIX(clasno-1);
}
obj_Class class_named(char *s){
  int no=FIX2INT(add_class(rb_cObject,rb_str_new2(s)));
  return class_obj[no];
}

void add_method(int clas,int num,char *name){
  class_obj[clas]->methods[num]=dlsym(sl,name);
}

VALUE add_methodrb(VALUE self,VALUE clas,VALUE num,VALUE name){
  add_method(FIX2INT(clas),FIX2INT(num),RSTRING_PTR(name));
  return Qnil;
}
void peridot_eval(char *s){
  rb_funcall(rb_cObject,rb_intern("peridot_eval"),1,rb_str_new2(s));
}
int Init_Load(){int i;
  for(i=0;i<100;i++) methods[i]=NULL;
  rb_define_method(rb_cObject,"load_test",load_test,0);
  rb_define_method(rb_cObject,"peridot_library",set_sl,1);
  rb_define_method(rb_cObject,"peridot_method",add_methodrb,3);
  rb_define_method(rb_cObject,"peridot_class",add_class,1);
}
