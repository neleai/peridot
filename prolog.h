#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {int class;} _obj;
typedef _obj* obj;
typedef struct {int class;int    in;} obj_Fixint;
typedef struct {int class;obj  *ary;} obj_Array;
typedef struct {int class;char *ary;} obj_String;


typedef obj (* obj_fn)();
obj Int(int i)  {obj_Fixint *o=malloc(sizeof(obj_Fixint));  o->class=0;o->in=i;                   return (obj)o;}
obj Array()     {obj_Array  *o=malloc(sizeof(obj_Array ));  o->class=1;o->ary=(obj *) malloc(100);return (obj)o;}
obj Str(char *c){obj_String *o=malloc(sizeof(obj_String));  o->class=2;o->ary=c;                  return (obj)o;}
obj Toplevel()  {_obj       *o=malloc(sizeof(_obj));        o->class=3;                           return (obj)o;}

int   obj2int(obj o){return ((obj_Fixint*)o)->in;}
obj*  obj2ary(obj o){return ((obj_Array *)o)->ary;}
char* obj2str(obj o){return ((obj_String*)o)->ary;}

