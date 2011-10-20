#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE Peridot_parser_root(VALUE self );
VALUE s_exprPeridot_parser;
VALUE Peridot_parser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=rb_funcall(self,s_exprPeridot_parser,0); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_peridot_c(){ 
 cls_Peridot_parser=rb_define_class("Peridot_parser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
s_exprPeridot_parser=rb_intern("expr");
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
 rb_eval_string("testversionperidot('e7c852c8d837ea14d82e31bf00035e49')");}
