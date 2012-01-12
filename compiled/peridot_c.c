#include "cthyst.h"
VALUE cls_Peridot_parser;
VALUE AmethystCore_anything(VALUE self );
VALUE Peridot_parser_atom(VALUE self );
VALUE Peridot_parser_block(VALUE self );
VALUE Peridot_parser_defi(VALUE self );
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_expr_ar1(VALUE self );
VALUE Peridot_parser_expr_ar2(VALUE self );
VALUE Peridot_parser_expr_ar3(VALUE self );
VALUE Peridot_parser_name(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE Peridot_parser_sequence(VALUE self );
static VALUE s_2;
static VALUE s_3;
static VALUE s_4;
static VALUE s_5;
static VALUE s_;
static VALUE s___b14a;
static VALUE s__d41d;
static VALUE s__divide_6666;
static VALUE s__minus_336d;
static VALUE s__plus_26b1;
static VALUE s__times_3389;
static VALUE s__times_times_514f;
static VALUE s_def_4ed9;
static VALUE s_end_7f02;
static VALUE s_if_39c8;
static VALUE sy_Peridot_parser_;
static VALUE sy_Peridot_parser_Assign;
static VALUE sy_Peridot_parser_CCode;
static VALUE sy_Peridot_parser_Call2;
static VALUE sy_Peridot_parser_Call;
static VALUE sy_Peridot_parser_Def;
static VALUE sy_Peridot_parser_If;
static VALUE sy_Peridot_parser_Seq;
static VALUE sy_Peridot_parser_Var;
static VALUE sy_Peridot_parser__append2;
static VALUE sy_Peridot_parser__append3;
static VALUE sy_Peridot_parser__append4;
static VALUE sy_Peridot_parser__append5;
static VALUE sy_Peridot_parser__append6;
static VALUE sy_Peridot_parser__append7;
static VALUE sy_Peridot_parser__append;
static VALUE sy_Peridot_parser_bind;
static VALUE sy_alnum;
static VALUE sy_alpha;
static VALUE sy_newline;
static VALUE sy_number;
static VALUE sy_seq;
static VALUE sy_token;
VALUE Peridot_parser_atom(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(11);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*s*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*ary*/,it);
 it=rb_obj_clone(s__d41d); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(fail);int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,sy_number,0); FAILTEST(alt1_2); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s_); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3);  it=Peridot_parser_expr(self ); FAILTEST(alt1_3); bind_aset(bind,3/*e*/,it);
 it=rb_obj_clone(s_2); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_3);it=bind_aget(bind,3/*e*/); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_3: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s_if_39c8); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_4); it=rb_obj_clone(s_); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_4);  it=Peridot_parser_expr(self ); FAILTEST(alt1_4); bind_aset(bind,4/*expr*/,it);
 it=rb_obj_clone(s_2); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_4);  it=Peridot_parser_block(self ); FAILTEST(alt1_4); bind_aset(bind,5/*block*/,it);
it=rb_funcall(self,sy_Peridot_parser_If,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_4: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s_3); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_5);int oldpos2; while(1){oldpos2=ame_getpos(self); int oldpos3=ame_getpos(self);
alt2_1: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s_4); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt2_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept2;
alt2_2: ame_setpos(self,oldpos3);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt2_3); bind_aset(bind,6/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append5,1,bind);  
ame_setcut(self,Qnil);goto accept2;
  alt2_3:  ame_setpos(self,oldpos3); goto break1;
 accept2:;
 if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=rb_funcall(self,sy_Peridot_parser_CCode,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_5: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Peridot_parser_name(self ); FAILTEST(alt1_6); bind_aset(bind,7/*autovar*/,it);
it=bind_aget(bind,7/*autovar*/); bind_aset(bind,8/*autovar*/,it);
int oldpos4=ame_getpos(self);
alt3_1: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*name*/,it);
 it=rb_obj_clone(s_); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt3_2);  it=Peridot_parser_expr(self ); FAILTEST(alt3_2); bind_aset(bind,10/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append6,1,bind);  it=rb_obj_clone(s_2); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt3_2);it=rb_funcall(self,sy_Peridot_parser_Call,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
alt3_2: ame_setpos(self,oldpos4);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto alt1_6;}
 it=bind_aget(bind,8/*autovar*/); bind_aset(bind,9/*name*/,it);
it=rb_funcall(self,sy_Peridot_parser_,1,bind); FAILTEST(alt3_3);it=rb_funcall(self,sy_Peridot_parser_Var,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept3;
  alt3_3:  ame_setpos(self,oldpos4); goto alt1_6;
 accept3:;
 
ame_setcut(self,Qnil);goto accept1;
  alt1_6:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_block(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(2);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

 it=rb_obj_clone(s_3); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(fail);  it=Peridot_parser_sequence(self ); FAILTEST(fail); bind_aset(bind,0/*s*/,it);
 it=rb_obj_clone(s_4); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(fail);it=bind_aget(bind,0/*s*/); bind_aset(bind,1/*_result*/,it);
it=bind_aget(bind,1/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_defi(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(6);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*args*/,it);
it=rb_ary_new3(0); bind_aset(bind,1/*ary*/,it);
 it=rb_obj_clone(s_def_4ed9); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(fail); it=rb_obj_clone(s__d41d); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(fail);  it=Peridot_parser_name(self ); FAILTEST(fail); bind_aset(bind,2/*name*/,it);
 it=rb_obj_clone(s_); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(fail);int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s_2); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_2);ame_setcut(self,Qtrue);ame_setstop(self,Qtrue); 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
   it=AmethystCore_anything(self ); FAILTEST(alt1_3); bind_aset(bind,3/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append2,1,bind);  
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1);   it=Peridot_parser_sequence(self ); FAILTEST(fail); bind_aset(bind,4/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append3,1,bind);  it=rb_obj_clone(s_end_7f02); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(fail);it=rb_funcall(self,sy_Peridot_parser_Def,1,bind);  bind_aset(bind,5/*_result*/,it);
it=bind_aget(bind,5/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(3);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s__d41d); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_2);  it=Peridot_parser_name(self ); FAILTEST(alt1_2); bind_aset(bind,0/*name*/,it);
 it=rb_obj_clone(s_5); arg0=it; it=rb_funcall(self,sy_seq,1,arg0); FAILTEST(alt1_2);  it=Peridot_parser_expr(self ); FAILTEST(alt1_2); bind_aset(bind,1/*expr*/,it);
it=rb_funcall(self,sy_Peridot_parser_Assign,1,bind);  bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=Peridot_parser_expr_ar1(self ); FAILTEST(alt1_3); bind_aset(bind,2/*_result*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=bind_aget(bind,2/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr_ar1(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Peridot_parser_expr_ar2(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__plus_26b1); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*op*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__minus_336d); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_3); bind_aset(bind,1/*op*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=Peridot_parser_expr_ar2(self ); FAILTEST(break1); bind_aset(bind,2/*b*/,it);
it=rb_funcall(self,sy_Peridot_parser_Call2,1,bind);  bind_aset(bind,0/*a*/,it);
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr_ar2(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Peridot_parser_expr_ar3(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self); int oldpos2=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__times_3389); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_2); bind_aset(bind,1/*op*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos2);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto break1;}
  it=rb_obj_clone(s__divide_6666); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_3); bind_aset(bind,1/*op*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos2); goto break1;
 accept1:;
  it=Peridot_parser_expr_ar3(self ); FAILTEST(break1); bind_aset(bind,2/*b*/,it);
it=rb_funcall(self,sy_Peridot_parser_Call2,1,bind);  bind_aset(bind,0/*a*/,it);
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_expr_ar3(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

  it=Peridot_parser_atom(self ); FAILTEST(fail); bind_aset(bind,0/*a*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);  it=rb_obj_clone(s__times_times_514f); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(break1); bind_aset(bind,1/*op*/,it);
  it=Peridot_parser_atom(self ); FAILTEST(break1); bind_aset(bind,2/*b*/,it);
it=rb_funcall(self,sy_Peridot_parser_Call2,1,bind);  bind_aset(bind,0/*a*/,it);
 if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_name(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(5);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

int oldpos1=ame_getpos(self);
alt1_1: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
   it=rb_funcall(self,sy_alpha,0); FAILTEST(alt1_2); bind_aset(bind,0/*s*/,it);
 
ame_setcut(self,Qnil);goto accept1;
alt1_2: ame_setpos(self,oldpos1);if (ame_getcut(self)!=Qnil) {ame_setcut(self,Qnil); goto fail;}
  it=rb_obj_clone(s___b14a); arg0=it; it=rb_funcall(self,sy_token,1,arg0); FAILTEST(alt1_3); bind_aset(bind,0/*s*/,it);
 
ame_setcut(self,Qnil);goto accept1;
  alt1_3:  ame_setpos(self,oldpos1); goto fail;
 accept1:;
it=rb_ary_new3(0); bind_aset(bind,1/*autovar*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=rb_funcall(self,sy_alnum,0); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append4,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,1/*autovar*/); bind_aset(bind,3/*it*/,it);
it=rb_funcall(self,sy_Peridot_parser_bind,1,bind);  bind_aset(bind,4/*_result*/,it);
it=bind_aget(bind,4/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_root(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*autovar*/,it);
int oldpos1; while(1){oldpos1=ame_getpos(self);   it=Peridot_parser_defi(self ); FAILTEST(break1); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=bind_aget(bind,0/*autovar*/); bind_aset(bind,2/*a*/,it);
int oldpos2; while(1){oldpos2=ame_getpos(self);   it=AmethystCore_anything(self ); FAILTEST(break2); if (ame_getstop(self)!=Qnil){{oldpos2=ame_getpos(self);goto break2;} } } break2: ame_setstop(self,Qnil);  ame_setpos(self,oldpos2); it=bind_aget(bind,2/*a*/); bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
VALUE Peridot_parser_sequence(VALUE self ){VALUE vals[0]; VALUE bind=bind_new2(4);  int x;VALUE arg0,arg1,arg2,arg3;VALUE it; cstruct *ptr; Data_Get_Struct(self,cstruct,ptr);

it=rb_ary_new3(0); bind_aset(bind,0/*ary*/,it);
  it=Peridot_parser_expr(self ); FAILTEST(fail); bind_aset(bind,1/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append,1,bind); int oldpos1; while(1){oldpos1=ame_getpos(self);   it=rb_funcall(self,sy_newline,0); FAILTEST(break1);  it=Peridot_parser_expr(self ); FAILTEST(break1); bind_aset(bind,2/*autovar*/,it);
it=rb_funcall(self,sy_Peridot_parser__append7,1,bind);  if (ame_getstop(self)!=Qnil){{oldpos1=ame_getpos(self);goto break1;} } } break1: ame_setstop(self,Qnil);  ame_setpos(self,oldpos1); it=rb_funcall(self,sy_Peridot_parser_Seq,1,bind);  bind_aset(bind,3/*_result*/,it);
it=bind_aget(bind,3/*_result*/);
return it;
fail: return failobj; }
void Init_peridot_c(){ 
 cls_Peridot_parser=rb_define_class("Peridot_parser",rb_const_get(rb_cObject,rb_intern("Amethyst"))); 
failobj=rb_eval_string("FAIL");
s_2=rb_str_new2(")");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_2);
s_3=rb_str_new2("{");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_3);
s_4=rb_str_new2("}");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_4);
s_5=rb_str_new2("=");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_5);
s_=rb_str_new2("(");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_);
s___b14a=rb_str_new2("_");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s___b14a);
s__d41d=rb_str_new2("");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__d41d);
s__divide_6666=rb_str_new2("/");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__divide_6666);
s__minus_336d=rb_str_new2("-");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__minus_336d);
s__plus_26b1=rb_str_new2("+");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__plus_26b1);
s__times_3389=rb_str_new2("*");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__times_3389);
s__times_times_514f=rb_str_new2("**");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s__times_times_514f);
s_def_4ed9=rb_str_new2("def");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_def_4ed9);
s_end_7f02=rb_str_new2("end");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_end_7f02);
s_if_39c8=rb_str_new2("if");rb_ary_push(rb_const_get(rb_cObject,rb_intern("GC_mark")),s_if_39c8);
sy_Peridot_parser_=rb_intern("Peridot_parser_");
sy_Peridot_parser_Assign=rb_intern("Peridot_parser_Assign");
sy_Peridot_parser_CCode=rb_intern("Peridot_parser_CCode");
sy_Peridot_parser_Call2=rb_intern("Peridot_parser_Call2");
sy_Peridot_parser_Call=rb_intern("Peridot_parser_Call");
sy_Peridot_parser_Def=rb_intern("Peridot_parser_Def");
sy_Peridot_parser_If=rb_intern("Peridot_parser_If");
sy_Peridot_parser_Seq=rb_intern("Peridot_parser_Seq");
sy_Peridot_parser_Var=rb_intern("Peridot_parser_Var");
sy_Peridot_parser__append2=rb_intern("Peridot_parser__append2");
sy_Peridot_parser__append3=rb_intern("Peridot_parser__append3");
sy_Peridot_parser__append4=rb_intern("Peridot_parser__append4");
sy_Peridot_parser__append5=rb_intern("Peridot_parser__append5");
sy_Peridot_parser__append6=rb_intern("Peridot_parser__append6");
sy_Peridot_parser__append7=rb_intern("Peridot_parser__append7");
sy_Peridot_parser__append=rb_intern("Peridot_parser__append");
sy_Peridot_parser_bind=rb_intern("Peridot_parser_bind");
sy_alnum=rb_intern("alnum");
sy_alpha=rb_intern("alpha");
sy_newline=rb_intern("newline");
sy_number=rb_intern("number");
sy_seq=rb_intern("seq");
sy_token=rb_intern("token");
rb_define_method(cls_Peridot_parser,"atom",Peridot_parser_atom,0);
rb_define_method(cls_Peridot_parser,"block",Peridot_parser_block,0);
rb_define_method(cls_Peridot_parser,"defi",Peridot_parser_defi,0);
rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
rb_define_method(cls_Peridot_parser,"expr_ar1",Peridot_parser_expr_ar1,0);
rb_define_method(cls_Peridot_parser,"expr_ar2",Peridot_parser_expr_ar2,0);
rb_define_method(cls_Peridot_parser,"expr_ar3",Peridot_parser_expr_ar3,0);
rb_define_method(cls_Peridot_parser,"name",Peridot_parser_name,0);
rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
rb_define_method(cls_Peridot_parser,"sequence",Peridot_parser_sequence,0);
 rb_eval_string("testversionperidot('2b1f55963c8e939d98e63188f6798cfb')");}
