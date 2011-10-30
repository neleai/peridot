#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE AmethystCore_anything(VALUE self );
VALUE Peridot_parser_atom(VALUE self );
VALUE Peridot_parser_defi(VALUE self );
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_mulexpr(VALUE self );
VALUE Peridot_parser_name(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE Peridot_parser_sequence(VALUE self );
VALUE c_10;
VALUE c_11;
VALUE c_12;
VALUE c_13;
VALUE c_14;
VALUE c_18;
VALUE c_19;
VALUE c_20;
VALUE c_21;
VALUE c_22;
VALUE c_3;
VALUE c_4;
VALUE c_5;
VALUE c_6;
VALUE c_7;
VALUE s_alnumPeridot_parser;
VALUE s_alphaPeridot_parser;
VALUE s_atom_Peridot_parsercb_1Peridot_parser;
VALUE s_atom_Peridot_parsercb_2Peridot_parser;
VALUE s_atom_Peridot_parsercb_3Peridot_parser;
VALUE s_atom_Peridot_parsercb_4Peridot_parser;
VALUE s_atom_Peridot_parsercb_5Peridot_parser;
VALUE s_atom_Peridot_parsercb_6Peridot_parser;
VALUE s_defi_Peridot_parsercb_1Peridot_parser;
VALUE s_defi_Peridot_parsercb_2Peridot_parser;
VALUE s_defi_Peridot_parsercb_3Peridot_parser;
VALUE s_expr_Peridot_parsercb_1Peridot_parser;
VALUE s_mulexpr_Peridot_parsercb_1Peridot_parser;
VALUE s_name_Peridot_parsercb_1Peridot_parser;
VALUE s_name_Peridot_parsercb_2Peridot_parser;
VALUE s_numberPeridot_parser;
VALUE s_seqPeridot_parser;
VALUE s_sequence_Peridot_parsercb_1Peridot_parser;
VALUE s_sequence_Peridot_parsercb_2Peridot_parser;
VALUE s_sequence_Peridot_parsercb_3Peridot_parser;
VALUE s_sequence_Peridot_parsercb_4Peridot_parser;
VALUE s_tokenPeridot_parser;
VALUE Peridot_parser_atom(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*s*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*ary*/,it); it=rb_funcall(self,s_atom_Peridot_parsercb_1Peridot_parser,1,bind);  it=rb_obj_clone(c_18); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,s_numberPeridot_parser,0); FAILTEST(alt1_2);
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(c_19); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_3);int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_20); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_defi_Peridot_parsercb_1Peridot_parser,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,s_atom_Peridot_parsercb_2Peridot_parser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Peridot_parser_name(self ); FAILTEST(alt1_4);
 bind_aset(bind,4/*name*/,it);  it=rb_obj_clone(c_21); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_4);  it=Peridot_parser_expr(self ); FAILTEST(alt1_4);
 bind_aset(bind,5/*autovar*/,it); it=rb_funcall(self,s_atom_Peridot_parsercb_3Peridot_parser,1,bind);  it=rb_obj_clone(c_22); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_4);it=rb_funcall(self,s_atom_Peridot_parsercb_4Peridot_parser,1,bind);
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Peridot_parser_name(self ); FAILTEST(alt1_5);
 bind_aset(bind,4/*name*/,it); it=rb_funcall(self,s_atom_Peridot_parsercb_5Peridot_parser,1,bind); FAILTEST(alt1_5);it=rb_funcall(self,s_atom_Peridot_parsercb_6Peridot_parser,1,bind); 
 bind_aset(bind,2/*_result*/,it);  
ame_setcut(self,Qnil);goto accept1;
  alt1_5:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_defi(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*args*/,it); it=rb_ary_new3(0);
 bind_aset(bind,1/*ary*/,it);  it=rb_obj_clone(c_10); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(fail); it=rb_obj_clone(c_11); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(fail);  it=Peridot_parser_name(self ); FAILTEST(fail);
 bind_aset(bind,2/*name*/,it);  it=rb_obj_clone(c_12); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(fail);int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_13); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3);
 bind_aset(bind,3/*autovar*/,it); it=rb_funcall(self,s_defi_Peridot_parsercb_1Peridot_parser,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1);   it=Peridot_parser_sequence(self ); FAILTEST(fail);
 bind_aset(bind,4/*autovar*/,it); it=rb_funcall(self,s_defi_Peridot_parsercb_2Peridot_parser,1,bind);  it=rb_obj_clone(c_14); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(fail);it=rb_funcall(self,s_defi_Peridot_parsercb_3Peridot_parser,1,bind);
 bind_aset(bind,5/*_result*/,it); it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Peridot_parser_mulexpr(self ); FAILTEST(fail);
 bind_aset(bind,0/*a*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_obj_clone(c_6); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(break1);  it=Peridot_parser_mulexpr(self ); FAILTEST(break1);
 bind_aset(bind,1/*b*/,it); it=rb_funcall(self,s_expr_Peridot_parsercb_1Peridot_parser,1,bind); 
 bind_aset(bind,0/*a*/,it);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/);
 bind_aset(bind,2/*_result*/,it); it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_mulexpr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

  it=Peridot_parser_atom(self ); FAILTEST(fail);
 bind_aset(bind,0/*a*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_obj_clone(c_7); arg0=it; it=rb_funcall(self,s_tokenPeridot_parser,1,arg0); FAILTEST(break1);  it=Peridot_parser_atom(self ); FAILTEST(break1);
 bind_aset(bind,1/*b*/,it); it=rb_funcall(self,s_mulexpr_Peridot_parsercb_1Peridot_parser,1,bind); 
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
VALUE Peridot_parser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*autovar*/,it); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Peridot_parser_defi(self ); FAILTEST(break1);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_Peridot_parsercb_1Peridot_parser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/);
 bind_aset(bind,2/*a*/,it); int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*a*/);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it;

it=rb_ary_new3(0);
 bind_aset(bind,0/*ary*/,it);   it=Peridot_parser_expr(self ); FAILTEST(fail);
 bind_aset(bind,1/*autovar*/,it); it=rb_funcall(self,s_sequence_Peridot_parsercb_1Peridot_parser,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self); it=rb_funcall(self,s_sequence_Peridot_parsercb_2Peridot_parser,1,bind); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_3); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_2); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_4); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_3); 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(c_5); arg0=it; it=rb_funcall(self,s_seqPeridot_parser,1,arg0); FAILTEST(alt1_4); 
ame_setcut(self,Qnil);goto accept1;
  alt1_4:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=Peridot_parser_expr(self ); FAILTEST(break1);
 bind_aset(bind,2/*autovar*/,it); it=rb_funcall(self,s_sequence_Peridot_parsercb_3Peridot_parser,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,s_sequence_Peridot_parsercb_4Peridot_parser,1,bind);
 bind_aset(bind,3/*_result*/,it); it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
void Init_peridot_c(){ 
 cls_Peridot_parser=rb_define_class("Peridot_parser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
c_10=rb_str_new2("def");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_10);
c_11=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_11);
c_12=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_12);
c_13=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_13);
c_14=rb_str_new2("end");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_14);
c_18=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_18);
c_19=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_19);
c_20=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_20);
c_21=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_21);
c_22=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_22);
c_3=rb_str_new2("\r\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_3);
c_4=rb_str_new2("\r");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_4);
c_5=rb_str_new2("\n");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_5);
c_6=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_6);
c_7=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),c_7);
s_alnumPeridot_parser=rb_intern("alnum");
s_alphaPeridot_parser=rb_intern("alpha");
s_atom_Peridot_parsercb_1Peridot_parser=rb_intern("atom_Peridot_parsercb_1");
s_atom_Peridot_parsercb_2Peridot_parser=rb_intern("atom_Peridot_parsercb_2");
s_atom_Peridot_parsercb_3Peridot_parser=rb_intern("atom_Peridot_parsercb_3");
s_atom_Peridot_parsercb_4Peridot_parser=rb_intern("atom_Peridot_parsercb_4");
s_atom_Peridot_parsercb_5Peridot_parser=rb_intern("atom_Peridot_parsercb_5");
s_atom_Peridot_parsercb_6Peridot_parser=rb_intern("atom_Peridot_parsercb_6");
s_defi_Peridot_parsercb_1Peridot_parser=rb_intern("defi_Peridot_parsercb_1");
s_defi_Peridot_parsercb_2Peridot_parser=rb_intern("defi_Peridot_parsercb_2");
s_defi_Peridot_parsercb_3Peridot_parser=rb_intern("defi_Peridot_parsercb_3");
s_expr_Peridot_parsercb_1Peridot_parser=rb_intern("expr_Peridot_parsercb_1");
s_mulexpr_Peridot_parsercb_1Peridot_parser=rb_intern("mulexpr_Peridot_parsercb_1");
s_name_Peridot_parsercb_1Peridot_parser=rb_intern("name_Peridot_parsercb_1");
s_name_Peridot_parsercb_2Peridot_parser=rb_intern("name_Peridot_parsercb_2");
s_numberPeridot_parser=rb_intern("number");
s_seqPeridot_parser=rb_intern("seq");
s_sequence_Peridot_parsercb_1Peridot_parser=rb_intern("sequence_Peridot_parsercb_1");
s_sequence_Peridot_parsercb_2Peridot_parser=rb_intern("sequence_Peridot_parsercb_2");
s_sequence_Peridot_parsercb_3Peridot_parser=rb_intern("sequence_Peridot_parsercb_3");
s_sequence_Peridot_parsercb_4Peridot_parser=rb_intern("sequence_Peridot_parsercb_4");
s_tokenPeridot_parser=rb_intern("token");
rb_define_method(cls_Peridot_parser,"atom",Peridot_parser_atom,0);
rb_define_method(cls_Peridot_parser,"defi",Peridot_parser_defi,0);
rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
rb_define_method(cls_Peridot_parser,"mulexpr",Peridot_parser_mulexpr,0);
rb_define_method(cls_Peridot_parser,"name",Peridot_parser_name,0);
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
rb_define_method(cls_Peridot_parser,"sequence",Peridot_parser_sequence,0);
 rb_eval_string("testversionperidot('38a58faf3b41286ae26696b1eef350c4')");}
