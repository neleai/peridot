#include <stdio.h>
#include <stdlib.h>
typedef struct {int class;} _obj;
typedef _obj* obj;
typedef struct {int class;int in;} obj_fixint;
typedef struct {int class;obj *ary;} obj_array;
typedef struct {int class;char *ary;} obj_string;


typedef obj (* obj_fn)();
obj Int(int i)  {obj_fixint *o=malloc(sizeof(obj_fixint));  o->class=0;o->in=i;                   return o;}
obj Array()     {obj_array  *o=malloc(sizeof(obj_array ));  o->class=1;o->ary=(obj *) malloc(100);return o;}
obj Str(char *c){obj_string *o=malloc(sizeof(obj_string));  o->class=2;o->ary=c;                  return o;}

int obj2int(obj o){return ((obj_fixint*)o)->in;}
obj geti(){int i;scanf("%i",&i);return Int(i);}
obj*  obj2ary(obj o){return ((obj_array *)o)->ary;}
char* obj2str(obj o){return ((obj_string*)o)->ary;}

