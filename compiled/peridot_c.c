#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE c_1;
VALUE c_2;
VALUE s_tokenPeridot_parser;
VALUE Peridot_parser_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(1);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

 it=rb_obj_clone(c_1); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(fail);it=c_2;
 bind_aset(bind,0/*_result*/,it); it=bind_aget(bind,0/*_result*/);
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
c_1=rb_str_new2("2+2");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_1);
c_2=rb_funcall(rb_str_new2("42"),rb_intern("to_i"),0);rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_2);
s_tokenPeridot_parser=rb_intern("token");
rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
 rb_eval_string("testversionperidot('f74c84b358233ef07d602908a320c090')");}
