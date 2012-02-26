#include "ruby.h"
#include <dlfcn.h>
VALUE load_test(){
  void *testl=dlopen("./test.so",RTLD_NOW);
  void (*man)()=dlsym(testl,"main");
  man();
  return Qnil;
}
int Init_Load(){
  rb_define_method(rb_cObject,"load_test",load_test,0);
}
