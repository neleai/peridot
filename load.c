#include "ruby.h"
#include <dlfcn.h>
VALUE load_test(){
  void *testl=dlopen("./test.so",RTLD_NOW);
  void (*man)()=dlsym(testl,"main");
  man();
  return Qnil;
}

void *sl;
void** methods[100];
void add_method(int clas,int num,char *name){
  methods[clas][num]=dlsym(sl,name);
}
VALUE add_methodrb(VALUE self,VALUE clas,VALUE num,VALUE name){
  add_method(FIX2INT(clas),FIX2INT(num),RSTRING_PTR(name));
  return Qnil;
}
VALUE set_sl(VALUE self,VALUE lib){
  sl=dlopen(RSTRING_PTR(lib),RTLD_NOW);
  return Qnil;
}
VALUE add_class(VALUE self,VALUE no){
  if (!methods[FIX2INT(no)])
    methods[FIX2INT(no)]=calloc(sizeof(void *),100);
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
