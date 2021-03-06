#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct _obj_Class;
typedef struct _obj_Class* obj_Class;
typedef struct {obj_Class class;} _obj;
typedef _obj* obj;
typedef obj (* obj_fn)();

typedef struct {obj_Class class;int    in;} obj_Fixint;
typedef struct {obj_Class class;obj  *ary;} obj_Array;
typedef struct {obj_Class class;char *ary;} obj_String;
typedef struct {obj_Class class;obj *args;obj  **locals;} obj_Binding;
typedef struct {obj_Class class;obj_fn lam;obj_Binding *bnd;} obj_Lambda;
typedef struct {obj_Class class;obj returned; obj_Lambda *cont;} obj_Continuation;

typedef struct _obj_Class {obj_Class class;char *ary; obj_fn *methods;} _obj_Class;
obj_Class class_named(char *s);

obj Int(int i)    {obj_Fixint *o=malloc(sizeof(obj_Fixint));  o->class=class_named("Fixint");o->in=i;                   return (obj)o;}
obj Array()       {obj_Array  *o=malloc(sizeof(obj_Array ));  o->class=class_named("Array" );o->ary=(obj *) malloc(400);return (obj)o;}
obj Str(char *c  ){obj_String *o=malloc(sizeof(obj_String));  o->class=class_named("String");o->ary=c;                  return (obj)o;}
obj Toplevel()    {_obj       *o=malloc(sizeof(_obj));        o->class=class_named("TopLevel");                         return (obj)o;}
obj Foo()         {_obj       *o=malloc(sizeof(_obj));        o->class=class_named("Foo");                              return (obj)o;}
obj Binding()     {obj_Binding*o=malloc(sizeof(obj_Binding)); o->class=class_named("Binding" );o->args=(obj *) malloc(400); o->locals=(obj **) malloc(400);return (obj)o;}
obj Lambda(obj_fn f,obj_Binding * bnd)
                  {obj_Lambda*o=malloc(sizeof(obj_Lambda));o->class=class_named("Lambda" ); o->lam=f;o->bnd=bnd; return (obj)o;}
obj Continuation(obj returned,obj_Lambda *cont)
                  {obj_Continuation*o=malloc(sizeof(obj_Continuation));o->class=class_named("Continuation");o->returned=returned;o->cont=cont;return (obj)o;}
obj Class(char *c){_obj_Class *o=malloc(sizeof(_obj_Class));  
if (!strcmp(c,"Class")) o->class=o; 
else o->class=class_named("Class"); 

o->ary=c;o->methods=calloc(sizeof(void*),400); return (obj)o;}

int   obj2int(obj o){return ((obj_Fixint*)o)->in;}
obj*  obj2ary(obj o){return ((obj_Array *)o)->ary;}
char* obj2str(obj o){return ((obj_String*)o)->ary;}
