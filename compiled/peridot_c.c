#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE c_1;
VALUE s_expr_Peridot_parsercb_1Peridot_parser;
VALUE s_numberPeridot_parser;
VALUE s_tokenPeridot_parser;
VALUE Peridot_parser_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=rb_funcall(self,s_numberPeridot_parser,0); FAILTEST(fail);
 bind_aset(bind,0/*a*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_obj_clone(c_1); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(break1);  it=rb_funcall(self,s_numberPeridot_parser,0); FAILTEST(break1);
 bind_aset(bind,1/*b*/,it); it=rb_funcall(self,s_expr_Peridot_parsercb_1Peridot_parser,1,bind); 
 bind_aset(bind,0/*a*/,it);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Peridot_parser_expr(self ); FAILTEST(fail);
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
void Init_peridot_c(){ 
 cls_Peridot_parser=rb_define_class("Peridot_parser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_1=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_1);
s_expr_Peridot_parsercb_1Peridot_parser=rb_intern("expr_Peridot_parsercb_1");
s_numberPeridot_parser=rb_intern("number");
s_tokenPeridot_parser=rb_intern("token");
rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
 rb_eval_string("testversionperidot('cfb697db0d9e18eab06f1ac8c69afc26')");}
