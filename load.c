#include <dlfcn.h>
int main(){
  void *testl=dlopen("./test.so",RTLD_NOW);
  void (*man)()=dlsym(testl,"main");
  man();
}
