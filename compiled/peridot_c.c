#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE Peridot_parser_atom(VALUE self );
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_name(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE c_2;
VALUE s_alnumPeridot_parser;
VALUE s_alphaPeridot_parser;
VALUE s_atom_Peridot_parsercb_1Peridot_parser;
VALUE s_expr_Peridot_parsercb_1Peridot_parser;
VALUE s_name_Peridot_parsercb_1Peridot_parser;
VALUE s_name_Peridot_parsercb_2Peridot_parser;
VALUE s_numberPeridot_parser;
VALUE s_tokenPeridot_parser;
VALUE Peridot_parser_atom(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_numberPeridot_parser,0); FAILTEST(alt1_2);
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Peridot_parser_name(self ); FAILTEST(alt1_3);
 bind_aset(bind,1/*n*/,it); it=rb_funcall(self,s_atom_Peridot_parsercb_1Peridot_parser,1,bind); 
 bind_aset(bind,0/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,0/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Peridot_parser_atom(self ); FAILTEST(fail);
 bind_aset(bind,0/*a*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_obj_clone(c_2); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(break1);  it=Peridot_parser_atom(self ); FAILTEST(break1);
 bind_aset(bind,1/*b*/,it); it=rb_funcall(self,s_expr_Peridot_parsercb_1Peridot_parser,1,bind); 
 bind_aset(bind,0/*a*/,it);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=rb_funcall(self,s_alphaPeridot_parser,0); FAILTEST(fail);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=rb_funcall(self,s_alnumPeridot_parser,0); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_name_Peridot_parsercb_1Peridot_parser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,1/*autovar*/);
 bind_aset(bind,3/*it*/,it); it=rb_funcall(self,s_name_Peridot_parsercb_2Peridot_parser,1,bind); 
 bind_aset(bind,4/*_result*/,it); it=bind_aget(bind,4/*_result*/);
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
c_2=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_2);
s_alnumPeridot_parser=rb_intern("alnum");
s_alphaPeridot_parser=rb_intern("alpha");
s_atom_Peridot_parsercb_1Peridot_parser=rb_intern("atom_Peridot_parsercb_1");
s_expr_Peridot_parsercb_1Peridot_parser=rb_intern("expr_Peridot_parsercb_1");
s_name_Peridot_parsercb_1Peridot_parser=rb_intern("name_Peridot_parsercb_1");
s_name_Peridot_parsercb_2Peridot_parser=rb_intern("name_Peridot_parsercb_2");
s_numberPeridot_parser=rb_intern("number");
s_tokenPeridot_parser=rb_intern("token");
rb_define_method(cls_Peridot_parser,"atom",Peridot_parser_atom,0);
rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
rb_define_method(cls_Peridot_parser,"name",Peridot_parser_name,0);
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
 rb_eval_string("testversionperidot('c7952d3f3e905e14e659369431078ab5')");}
