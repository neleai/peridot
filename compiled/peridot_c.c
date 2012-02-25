#include "cthyst.h"
#include "memo.c"
VALUE cls_Peridot_parser;
VALUE AmethystCore_anything(VALUE self );
VALUE Peridot_parser_args(VALUE self );
VALUE Peridot_parser_atom(VALUE self );
VALUE Peridot_parser_block(VALUE self );
VALUE Peridot_parser_body(VALUE self );
VALUE Peridot_parser_defi(VALUE self );
VALUE Peridot_parser_defname(VALUE self );
VALUE Peridot_parser_expr(VALUE self );
VALUE Peridot_parser_expr_ar1(VALUE self );
VALUE Peridot_parser_expr_ar2(VALUE self );
VALUE Peridot_parser_expr_ar3(VALUE self );
VALUE Peridot_parser_expr_ar4(VALUE self );
VALUE Peridot_parser_expr_postfixed(VALUE self );
VALUE Peridot_parser_method(VALUE self );
VALUE Peridot_parser_name(VALUE self );
VALUE Peridot_parser_root(VALUE self );
VALUE Peridot_parser_sequence(VALUE self );
static VALUE s_2;
static VALUE s_3;
static VALUE s_4;
static VALUE s_5;
static VALUE s_6;
static VALUE s_;
static VALUE s___assign_43ec;
static VALUE s___divide_6666;
static VALUE s___lb_8154;
static VALUE s___minus_336d;
static VALUE s___plus_26b1;
static VALUE s___rb_0fbd;
static VALUE s___times_3389;
static VALUE s___times__times_514f;
static VALUE s__d41d;
static VALUE s_class_a2f2;
static VALUE s_def_4ed9;
static VALUE s_end_7f02;
static VALUE s_if_39c8;
static VALUE sy__;
static VALUE sy__Assign;
static VALUE sy__CCode__lb2;
static VALUE sy__CCode__lb;
static VALUE sy__CCode__lbbi_c1c3;
static VALUE sy__Call;
static VALUE sy__Call__lb2;
static VALUE sy__Call__lb3;
static VALUE sy__Call__lb4;
static VALUE sy__Call__lb5;
static VALUE sy__Call__lb;
static VALUE sy__Def;
static VALUE sy__If__lb;
static VALUE sy__Klass;
static VALUE sy__Seq;
static VALUE sy__Var;
static VALUE sy____append;
static VALUE sy__bind__lb1__rb__plus_947c;
static VALUE sy__leterize_5878;
static VALUE sy__leterize_fbae;
static VALUE sy_args;
static VALUE sy_atom;
static VALUE sy_block;
static VALUE sy_body;
static VALUE sy_defi;
static VALUE sy_defname;
static VALUE sy_expr;
static VALUE sy_expr_ar1;
static VALUE sy_expr_ar2;
static VALUE sy_expr_ar3;
static VALUE sy_expr_ar4;
static VALUE sy_expr_postfixed;
static VALUE sy_name;
static VALUE sy_newline;
static VALUE sy_number;
static VALUE sy_seq;
static VALUE sy_sequence;
static VALUE sy_token;
static VALUE sy_until;
VALUE profile_report_Peridot_parser(VALUE self) {
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    return Qnil;
}
VALUE Peridot_parser_args(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_expr,0);
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_atom(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,_ary,_n,__result,_e,_expr,_block,_it,_autovar,_autovar_2,_name,_autovar_3;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _s=it;;
    it=rb_ary_new3(0);
    _ary=it;;
    it=rb_obj_clone(s__d41d);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_number,0);
        FAILTEST(alt1_2);
        _n=it;;
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__CCode__lb,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s_3);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_3);
        it=rb_obj_clone(s_3);
        arg0=it;
        it=rb_funcall(self,sy_until,1,arg0);
        FAILTEST(alt1_3);
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__CCode__lb2,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s_);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_4);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt1_4);
        _e=it;;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt1_4);
        it=_e;
        __result=it;;

        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s_if_39c8);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_5);
        it=rb_obj_clone(s_);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt1_5);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt1_5);
        _expr=it;;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt1_5);
        it=rb_funcall(self,sy_block,0);
        FAILTEST(alt1_5);
        _block=it;;
        bind_aset(bind2,1,_expr);
        bind_aset(bind2,2,_block);
        it=rb_funcall(self,sy__If__lb,1,bind2);
        _expr=bind_aget(bind2,1);;
        _block=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_5:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s_4);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_6);
        it=rb_ary_new3(0);
        int stop1=0;
        while(!stop1) {
            int oldpos2=ptr->pos;
            int cut2=0;
alt2_1:
            ;
            it=rb_obj_clone(s_5);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(alt2_2);
            cut2=1;
            stop1=1;
            ;
            goto accept2;
alt2_2:
            ptr->pos=oldpos2;
            if (cut2) goto alt1_6;
            int oldpos3=ptr->pos;
            it=rb_obj_clone(s_4);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(reject1);
            x=1;
            goto accept3;
reject1:
            x=0;
accept3:
            it=Qnil;
            ptr->pos=oldpos3;
            if (x==0) goto alt2_3;
            it=rb_funcall(self,sy_atom,0);
            FAILTEST(alt2_3);
            _it=it;;
            bind_aset(bind2,1,_it);
            it=rb_funcall(self,sy__,1,bind2);
            _it=bind_aget(bind2,1);;
            _autovar=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_autovar);
            it=rb_funcall(self,sy____append,1,bind2);
            _s=bind_aget(bind2,1);;
            _autovar=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_3:
            ptr->pos=oldpos2;
            it=AmethystCore_anything(self );
            FAILTEST(alt2_4);
            _autovar_2=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_autovar_2);
            it=rb_funcall(self,sy____append,1,bind2);
            _s=bind_aget(bind2,1);;
            _autovar_2=bind_aget(bind2,2);;
            ;
            goto accept2;
alt2_4:
            ptr->pos=oldpos2;
            goto alt1_6;
accept2:
            ;
        }
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__CCode__lbbi_c1c3,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept1;
alt1_6:
        ptr->pos=oldpos1;
        int oldpos4=ptr->pos;
        int cut3=0;
alt3_1:
        ;
        it=rb_obj_clone(s_end_7f02);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt3_2);
        cut3=1;
        goto alt3_2;
        ;
        goto accept4;
alt3_2:
        ptr->pos=oldpos4;
        if (cut3) goto alt1_7;
        it=Qnil;
        ;
        goto accept4;
alt3_3:
        ptr->pos=oldpos4;
        goto alt1_7;
accept4:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt1_7;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_7);
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy__Var,1,bind2);
        _name=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept1;
alt1_7:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        int oldpos5=ptr->pos;
        int cut4=0;
alt4_1:
        ;
        it=rb_funcall(self,sy_number,0);
        FAILTEST(alt4_2);
        _n=it;;
        bind_aset(bind2,1,_n);
        it=rb_funcall(self,sy__CCode__lb,1,bind2);
        _n=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt4_2:
        ptr->pos=oldpos5;
        it=rb_obj_clone(s_3);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_3);
        it=rb_obj_clone(s_3);
        arg0=it;
        it=rb_funcall(self,sy_until,1,arg0);
        FAILTEST(alt4_3);
        _s=it;;
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__CCode__lb2,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt4_3:
        ptr->pos=oldpos5;
        it=rb_obj_clone(s_);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_4);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt4_4);
        _e=it;;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt4_4);
        it=_e;
        __result=it;;

        ;
        goto accept5;
alt4_4:
        ptr->pos=oldpos5;
        it=rb_obj_clone(s_if_39c8);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_5);
        it=rb_obj_clone(s_);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt4_5);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt4_5);
        _expr=it;;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt4_5);
        it=rb_funcall(self,sy_block,0);
        FAILTEST(alt4_5);
        _block=it;;
        bind_aset(bind2,1,_expr);
        bind_aset(bind2,2,_block);
        it=rb_funcall(self,sy__If__lb,1,bind2);
        _expr=bind_aget(bind2,1);;
        _block=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept5;
alt4_5:
        ptr->pos=oldpos5;
        it=rb_obj_clone(s_4);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_6);
        it=rb_ary_new3(0);
        int stop2=0;
        while(!stop2) {
            int oldpos6=ptr->pos;
            int cut5=0;
alt5_1:
            ;
            it=rb_obj_clone(s_5);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(alt5_2);
            cut5=1;
            stop2=1;
            ;
            goto accept6;
alt5_2:
            ptr->pos=oldpos6;
            if (cut5) goto alt4_6;
            int oldpos7=ptr->pos;
            it=rb_obj_clone(s_4);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(reject2);
            x=1;
            goto accept7;
reject2:
            x=0;
accept7:
            it=Qnil;
            ptr->pos=oldpos7;
            if (x==0) goto alt5_3;
            it=rb_funcall(self,sy_atom,0);
            FAILTEST(alt5_3);
            _it=it;;
            bind_aset(bind2,1,_it);
            it=rb_funcall(self,sy__,1,bind2);
            _it=bind_aget(bind2,1);;
            _autovar=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_autovar);
            it=rb_funcall(self,sy____append,1,bind2);
            _s=bind_aget(bind2,1);;
            _autovar=bind_aget(bind2,2);;
            ;
            goto accept6;
alt5_3:
            ptr->pos=oldpos6;
            it=AmethystCore_anything(self );
            FAILTEST(alt5_4);
            _autovar_2=it;;
            bind_aset(bind2,1,_s);
            bind_aset(bind2,2,_autovar_2);
            it=rb_funcall(self,sy____append,1,bind2);
            _s=bind_aget(bind2,1);;
            _autovar_2=bind_aget(bind2,2);;
            ;
            goto accept6;
alt5_4:
            ptr->pos=oldpos6;
            goto alt4_6;
accept6:
            ;
        }
        bind_aset(bind2,1,_s);
        it=rb_funcall(self,sy__CCode__lbbi_c1c3,1,bind2);
        _s=bind_aget(bind2,1);;
        __result=it;;

        ;
        goto accept5;
alt4_6:
        ptr->pos=oldpos5;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(alt4_7);
        _it=it;;
        bind_aset(bind2,1,_it);
        it=rb_funcall(self,sy__leterize_fbae,1,bind2);
        _it=bind_aget(bind2,1);;
        _name=it;;
        it=rb_obj_clone(s_);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_7);
        it=rb_funcall(self,sy_args,0);
        FAILTEST(alt4_7);
        _autovar_3=it;;
        bind_aset(bind2,1,_ary);
        bind_aset(bind2,2,_autovar_3);
        it=rb_funcall(self,sy____append,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_3=bind_aget(bind2,2);;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt4_7);
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy__Call,1,bind2);
        _name=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept5;
alt4_7:
        ptr->pos=oldpos5;
        int oldpos8=ptr->pos;
        int cut6=0;
alt6_1:
        ;
        it=rb_obj_clone(s_end_7f02);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt6_2);
        cut6=1;
        goto alt6_2;
        ;
        goto accept8;
alt6_2:
        ptr->pos=oldpos8;
        if (cut6) goto alt4_8;
        it=Qnil;
        ;
        goto accept8;
alt6_3:
        ptr->pos=oldpos8;
        goto alt4_8;
accept8:
        ;
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt4_8;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt4_8);
            _name=it;;
            break;
        }
        bind_aset(bind2,1,_name);
        bind_aset(bind2,2,_ary);
        it=rb_funcall(self,sy__Var,1,bind2);
        _name=bind_aget(bind2,1);;
        _ary=bind_aget(bind2,2);;
        __result=it;;

        ;
        goto accept5;
alt4_8:
        ptr->pos=oldpos5;
        goto fail;
accept5:
        ;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_block(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_obj_clone(s_4);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    it=rb_funcall(self,sy_sequence,0);
    FAILTEST(fail);
    _s=it;;
    it=rb_obj_clone(s_5);
    arg0=it;
    it=rb_funcall(self,sy_seq,1,arg0);
    FAILTEST(fail);
    it=_s;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_body(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_name,_autovar,_autovar_2,_ary,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_obj_clone(s_class_a2f2);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    it=rb_obj_clone(s__d41d);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(fail);
        _name=it;;
        break;
    }
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_defi,0);
        FAILTEST(alt1_2);
        _autovar_2=it;;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy____append,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_autovar;
    _ary=it;;
    it=rb_obj_clone(s_end_7f02);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    bind_aset(bind2,1,_name);
    bind_aset(bind2,2,_ary);
    it=rb_funcall(self,sy__Klass,1,bind2);
    _name=bind_aget(bind2,1);;
    _ary=bind_aget(bind2,2);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_defi(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_args,_ary,_name,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _args=it;;
    it=rb_ary_new3(0);
    _ary=it;;
    it=rb_obj_clone(s_def_4ed9);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    it=rb_obj_clone(s__d41d);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    it=rb_funcall(self,sy_defname,0);
    _name=it;;
    it=rb_obj_clone(s_);
    arg0=it;
    it=rb_funcall(self,sy_seq,1,arg0);
    FAILTEST(fail);
    it=rb_ary_new3(0);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_obj_clone(s_2);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_2);
        cut1=1;
        stop1=1;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        if (cut1) goto fail;
        it=AmethystCore_anything(self );
        FAILTEST(alt1_3);
        _autovar=it;;
        bind_aset(bind2,1,_args);
        bind_aset(bind2,2,_autovar);
        it=rb_funcall(self,sy____append,1,bind2);
        _args=bind_aget(bind2,1);;
        _autovar=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=rb_funcall(self,sy_sequence,0);
    FAILTEST(fail);
    _autovar_2=it;;
    bind_aset(bind2,1,_ary);
    bind_aset(bind2,2,_autovar_2);
    it=rb_funcall(self,sy____append,1,bind2);
    _ary=bind_aget(bind2,1);;
    _autovar_2=bind_aget(bind2,2);;
    it=rb_obj_clone(s_end_7f02);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(fail);
    bind_aset(bind2,1,_name);
    bind_aset(bind2,2,_args);
    bind_aset(bind2,3,_ary);
    it=rb_funcall(self,sy__Def,1,bind2);
    _name=bind_aget(bind2,1);;
    _args=bind_aget(bind2,2);;
    _ary=bind_aget(bind2,3);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_defname(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_x,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... UC(8):
            ;
        case UC(11) ... UC(12):
            ;
        case UC(14) ... UC(31):
            ;
        case '!' ... UC(39):
            ;
        case '*' ... UC(255):
            ;
            it=rb_str_new(ptr->str+ptr->pos,1);
            ptr->pos++;
            _autovar_2=it;;
            bind_aset(bind2,1,_autovar);
            bind_aset(bind2,2,_autovar_2);
            it=rb_funcall(self,sy____append,1,bind2);
            _autovar=bind_aget(bind2,1);;
            _autovar_2=bind_aget(bind2,2);;
            break;
        case UC(9) ... UC(10):
            ;
        case UC(13) ... UC(13):
            ;
        case ' ' ... ' ':
            ;
        case '(' ... ')':
            ;
            stop1=1;
            break;
        }
    }
    it=_autovar;
    _x=it;;
    bind_aset(bind2,1,_x);
    it=rb_funcall(self,sy__leterize_5878,1,bind2);
    _x=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_name,_expr,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    int oldpos1=ptr->pos;
    int cut1=0;
alt1_1:
    ;
    it=rb_obj_clone(s__d41d);
    arg0=it;
    it=rb_funcall(self,sy_token,1,arg0);
    FAILTEST(alt1_2);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto alt1_2;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(alt1_2);
        _name=it;;
        break;
    }
    it=rb_obj_clone(s___assign_43ec);
    arg0=it;
    it=rb_funcall(self,sy_seq,1,arg0);
    FAILTEST(alt1_2);
    it=rb_funcall(self,sy_expr,0);
    FAILTEST(alt1_2);
    _expr=it;;
    bind_aset(bind2,1,_name);
    bind_aset(bind2,2,_expr);
    it=rb_funcall(self,sy__Assign,1,bind2);
    _name=bind_aget(bind2,1);;
    _expr=bind_aget(bind2,2);;
    __result=it;;

    ;
    goto accept1;
alt1_2:
    ptr->pos=oldpos1;
    it=rb_funcall(self,sy_expr_ar1,0);
    FAILTEST(alt1_3);
    __result=it;;

    ;
    goto accept1;
alt1_3:
    ptr->pos=oldpos1;
    goto fail;
accept1:
    ;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr_ar1(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_op,_b,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_expr_ar2,0);
    FAILTEST(fail);
    _a=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_obj_clone(s___plus_26b1);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_2);
        _op=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=rb_obj_clone(s___minus_336d);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_3);
        _op=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;
        it=rb_funcall(self,sy_expr_ar2,0);
        FAILTEST(alt1_2);
        _b=it;;
        bind_aset(bind2,1,_op);
        bind_aset(bind2,2,_a);
        bind_aset(bind2,3,_b);
        it=rb_funcall(self,sy__Call__lb5,1,bind2);
        _op=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        _b=bind_aget(bind2,3);;
        _a=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr_ar2(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_op,_b,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_expr_ar3,0);
    FAILTEST(fail);
    _a=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_obj_clone(s___times_3389);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_2);
        _op=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=rb_obj_clone(s___divide_6666);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_3);
        _op=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;
        it=rb_funcall(self,sy_expr_ar3,0);
        FAILTEST(alt1_2);
        _b=it;;
        bind_aset(bind2,1,_op);
        bind_aset(bind2,2,_a);
        bind_aset(bind2,3,_b);
        it=rb_funcall(self,sy__Call__lb5,1,bind2);
        _op=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        _b=bind_aget(bind2,3);;
        _a=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr_ar3(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_op,_b,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_expr_ar4,0);
    FAILTEST(fail);
    _a=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_obj_clone(s___times__times_514f);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt1_2);
        _op=it;;
        it=rb_funcall(self,sy_expr_ar4,0);
        FAILTEST(alt1_2);
        _b=it;;
        bind_aset(bind2,1,_op);
        bind_aset(bind2,2,_a);
        bind_aset(bind2,3,_b);
        it=rb_funcall(self,sy__Call__lb5,1,bind2);
        _op=bind_aget(bind2,1);;
        _a=bind_aget(bind2,2);;
        _b=bind_aget(bind2,3);;
        _a=it;;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr_ar4(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_expr_postfixed,0);
    FAILTEST(fail);
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_expr_postfixed(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_a,_autovar,_arg,_arg2,_autovar_2,_name,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_funcall(self,sy_atom,0);
    FAILTEST(fail);
    _a=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_obj_clone(s___lb_8154);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_2);
        it=rb_funcall(self,sy_args,0);
        FAILTEST(alt1_2);
        _autovar=it;;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=_autovar;
        _arg=it;;
        it=rb_obj_clone(s___rb_0fbd);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_2);
        it=rb_obj_clone(s___assign_43ec);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_2);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt2_2);
        _arg2=it;;
        bind_aset(bind2,1,_a);
        bind_aset(bind2,2,_arg);
        bind_aset(bind2,3,_arg2);
        it=rb_funcall(self,sy__Call__lb,1,bind2);
        _a=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        _arg2=bind_aget(bind2,3);;
        _a=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=_autovar;
        _arg=it;;
        it=rb_obj_clone(s___rb_0fbd);
        arg0=it;
        it=rb_funcall(self,sy_token,1,arg0);
        FAILTEST(alt2_3);
        bind_aset(bind2,1,_a);
        bind_aset(bind2,2,_arg);
        it=rb_funcall(self,sy__Call__lb2,1,bind2);
        _a=bind_aget(bind2,1);;
        _arg=bind_aget(bind2,2);;
        _a=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;

        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        it=rb_obj_clone(s_6);
        arg0=it;
        it=rb_funcall(self,sy_seq,1,arg0);
        FAILTEST(alt1_3);
        switch((unsigned char)*ame_curstr2(ptr)) {
        case UC(0) ... '@':
            ;
        case '[' ... '^':
            ;
        case '`' ... '`':
            ;
        case '{' ... UC(255):
            ;
            goto alt1_3;
            break;
        case 'A' ... 'Z':
            ;
        case '_' ... '_':
            ;
        case 'a' ... 'z':
            ;
            it=rb_funcall(self,sy_name,0);
            FAILTEST(alt1_3);
            _autovar_2=it;;
            int oldpos3=ptr->pos;
            int cut3=0;
alt3_1:
            ;
            it=_autovar_2;
            _name=it;;
            it=rb_obj_clone(s_);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(alt3_2);
            it=rb_funcall(self,sy_args,0);
            FAILTEST(alt3_2);
            _arg=it;;
            it=rb_obj_clone(s_2);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(alt3_2);
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_a);
            bind_aset(bind2,3,_arg);
            it=rb_funcall(self,sy__Call__lb3,1,bind2);
            _name=bind_aget(bind2,1);;
            _a=bind_aget(bind2,2);;
            _arg=bind_aget(bind2,3);;
            _a=it;;

            ;
            goto accept3;
alt3_2:
            ptr->pos=oldpos3;
            it=_autovar_2;
            _name=it;;
            int oldpos4=ptr->pos;
            int cut4=0;
alt4_1:
            ;
            it=rb_obj_clone(s_);
            arg0=it;
            it=rb_funcall(self,sy_seq,1,arg0);
            FAILTEST(alt4_2);
            it=rb_obj_clone(s_2);
            arg0=it;
            it=rb_funcall(self,sy_token,1,arg0);
            FAILTEST(alt4_2);
            ;
            goto accept4;
alt4_2:
            ptr->pos=oldpos4;
            it=Qnil;
            ;
            goto accept4;
alt4_3:
            ptr->pos=oldpos4;
            goto alt3_3;
accept4:
            ;
            bind_aset(bind2,1,_name);
            bind_aset(bind2,2,_a);
            it=rb_funcall(self,sy__Call__lb4,1,bind2);
            _name=bind_aget(bind2,1);;
            _a=bind_aget(bind2,2);;
            _a=it;;

            ;
            goto accept3;
alt3_3:
            ptr->pos=oldpos3;
            goto alt1_3;
accept3:
            ;
            break;
        }
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_4:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_method(VALUE self ) {
    VALUE vals[0];
    VALUE it ,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_funcall(self,sy_name,0);
        FAILTEST(fail);
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_name(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_s,_autovar,_autovar_2,_it,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    switch((unsigned char)*ame_curstr2(ptr)) {
    case UC(0) ... '@':
        ;
    case '[' ... '^':
        ;
    case '`' ... '`':
        ;
    case '{' ... UC(255):
        ;
        goto fail;
        break;
    case 'A' ... 'Z':
        ;
    case '_' ... '_':
        ;
    case 'a' ... 'z':
        ;
        it=rb_str_new(ptr->str+ptr->pos,1);
        ptr->pos++;
        _s=it;;
        it=rb_ary_new3(0);
        _autovar=it;;
        int stop1=0;
        while(!stop1) {
            switch((unsigned char)*ame_curstr2(ptr)) {
            case UC(0) ... '/':
                ;
            case ':' ... '@':
                ;
            case '[' ... '^':
                ;
            case '`' ... '`':
                ;
            case '{' ... UC(255):
                ;
                stop1=1;
                break;
            case '0' ... '9':
                ;
            case 'A' ... 'Z':
                ;
            case '_' ... '_':
                ;
            case 'a' ... 'z':
                ;
                it=rb_str_new(ptr->str+ptr->pos,1);
                ptr->pos++;
                _autovar_2=it;;
                bind_aset(bind2,1,_autovar);
                bind_aset(bind2,2,_autovar_2);
                it=rb_funcall(self,sy____append,1,bind2);
                _autovar=bind_aget(bind2,1);;
                _autovar_2=bind_aget(bind2,2);;
                break;
            }
        }
        it=_autovar;
        _it=it;;
        bind_aset(bind2,1,_s);
        bind_aset(bind2,2,_it);
        it=rb_funcall(self,sy__bind__lb1__rb__plus_947c,1,bind2);
        _s=bind_aget(bind2,1);;
        _it=bind_aget(bind2,2);;
        __result=it;;
        break;
    }
    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_root(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_autovar,_autovar_2,_a,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _autovar=it;;
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        int oldpos2=ptr->pos;
        int cut2=0;
alt2_1:
        ;
        it=rb_funcall(self,sy_body,0);
        FAILTEST(alt2_2);
        _autovar_2=it;;

        ;
        goto accept2;
alt2_2:
        ptr->pos=oldpos2;
        it=rb_funcall(self,sy_defi,0);
        FAILTEST(alt2_3);
        _autovar_2=it;;

        ;
        goto accept2;
alt2_3:
        ptr->pos=oldpos2;
        it=rb_funcall(self,sy_sequence,0);
        FAILTEST(alt2_4);
        _autovar_2=it;;

        ;
        goto accept2;
alt2_4:
        ptr->pos=oldpos2;
        goto alt1_2;
accept2:
        ;
        bind_aset(bind2,1,_autovar);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy____append,1,bind2);
        _autovar=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    it=_autovar;
    _a=it;;
    it=rb_ary_new3(0);
    ptr->pos=ptr->len;
    it=_a;
    __result=it;;

    return it;
fail:
    return failobj;
}
VALUE Peridot_parser_sequence(VALUE self ) {
    VALUE vals[0];
    VALUE it ,_ary,_autovar,_autovar_2,__result;
    VALUE bind2=bind_new2(16);
    int x;
    VALUE arg0,arg1,arg2,arg3;
    cstruct *ptr;
    Data_Get_Struct(self,cstruct,ptr);
    it=rb_ary_new3(0);
    _ary=it;;
    it=rb_funcall(self,sy_expr,0);
    FAILTEST(fail);
    _autovar=it;;
    bind_aset(bind2,1,_ary);
    bind_aset(bind2,2,_autovar);
    it=rb_funcall(self,sy____append,1,bind2);
    _ary=bind_aget(bind2,1);;
    _autovar=bind_aget(bind2,2);;
    it=rb_ary_new3(0);
    int stop1=0;
    while(!stop1) {
        int oldpos1=ptr->pos;
        int cut1=0;
alt1_1:
        ;
        it=rb_funcall(self,sy_newline,0);
        FAILTEST(alt1_2);
        it=rb_funcall(self,sy_expr,0);
        FAILTEST(alt1_2);
        _autovar_2=it;;
        bind_aset(bind2,1,_ary);
        bind_aset(bind2,2,_autovar_2);
        it=rb_funcall(self,sy____append,1,bind2);
        _ary=bind_aget(bind2,1);;
        _autovar_2=bind_aget(bind2,2);;
        ;
        goto accept1;
alt1_2:
        ptr->pos=oldpos1;
        stop1=1;
        ;
        goto accept1;
alt1_3:
        ptr->pos=oldpos1;
        goto fail;
accept1:
        ;
    }
    bind_aset(bind2,1,_ary);
    it=rb_funcall(self,sy__Seq,1,bind2);
    _ary=bind_aget(bind2,1);;
    __result=it;;

    return it;
fail:
    return failobj;
}
void Init_peridot_c() {
    cls_Peridot_parser=rb_define_class("Peridot_parser",rb_const_get(rb_cObject,rb_intern("Amethyst")));
    failobj=rb_eval_string("FAIL");
    rb_define_method(cls_Peridot_parser,"profile_report",profile_report_Peridot_parser,0);
    s_2=rb_str_new2(")");
    rb_global_variable(&s_2);
    s_3=rb_str_new2("\"");
    rb_global_variable(&s_3);
    s_4=rb_str_new2("{");
    rb_global_variable(&s_4);
    s_5=rb_str_new2("}");
    rb_global_variable(&s_5);
    s_6=rb_str_new2(".");
    rb_global_variable(&s_6);
    s_=rb_str_new2("(");
    rb_global_variable(&s_);
    s___assign_43ec=rb_str_new2("=");
    rb_global_variable(&s___assign_43ec);
    s___divide_6666=rb_str_new2("/");
    rb_global_variable(&s___divide_6666);
    s___lb_8154=rb_str_new2("[");
    rb_global_variable(&s___lb_8154);
    s___minus_336d=rb_str_new2("-");
    rb_global_variable(&s___minus_336d);
    s___plus_26b1=rb_str_new2("+");
    rb_global_variable(&s___plus_26b1);
    s___rb_0fbd=rb_str_new2("]");
    rb_global_variable(&s___rb_0fbd);
    s___times_3389=rb_str_new2("*");
    rb_global_variable(&s___times_3389);
    s___times__times_514f=rb_str_new2("**");
    rb_global_variable(&s___times__times_514f);
    s__d41d=rb_str_new2("");
    rb_global_variable(&s__d41d);
    s_class_a2f2=rb_str_new2("class");
    rb_global_variable(&s_class_a2f2);
    s_def_4ed9=rb_str_new2("def");
    rb_global_variable(&s_def_4ed9);
    s_end_7f02=rb_str_new2("end");
    rb_global_variable(&s_end_7f02);
    s_if_39c8=rb_str_new2("if");
    rb_global_variable(&s_if_39c8);
    sy__=rb_intern("_");
    sy__Assign=rb_intern("_Assign");
    sy__CCode__lb2=rb_intern("_CCode__lb2");
    sy__CCode__lb=rb_intern("_CCode__lb");
    sy__CCode__lbbi_c1c3=rb_intern("_CCode__lbbi_c1c3");
    sy__Call=rb_intern("_Call");
    sy__Call__lb2=rb_intern("_Call__lb2");
    sy__Call__lb3=rb_intern("_Call__lb3");
    sy__Call__lb4=rb_intern("_Call__lb4");
    sy__Call__lb5=rb_intern("_Call__lb5");
    sy__Call__lb=rb_intern("_Call__lb");
    sy__Def=rb_intern("_Def");
    sy__If__lb=rb_intern("_If__lb");
    sy__Klass=rb_intern("_Klass");
    sy__Seq=rb_intern("_Seq");
    sy__Var=rb_intern("_Var");
    sy____append=rb_intern("___append");
    sy__bind__lb1__rb__plus_947c=rb_intern("_bind__lb1__rb__plus_947c");
    sy__leterize_5878=rb_intern("_leterize_5878");
    sy__leterize_fbae=rb_intern("_leterize_fbae");
    sy_args=rb_intern("args");
    sy_atom=rb_intern("atom");
    sy_block=rb_intern("block");
    sy_body=rb_intern("body");
    sy_defi=rb_intern("defi");
    sy_defname=rb_intern("defname");
    sy_expr=rb_intern("expr");
    sy_expr_ar1=rb_intern("expr_ar1");
    sy_expr_ar2=rb_intern("expr_ar2");
    sy_expr_ar3=rb_intern("expr_ar3");
    sy_expr_ar4=rb_intern("expr_ar4");
    sy_expr_postfixed=rb_intern("expr_postfixed");
    sy_name=rb_intern("name");
    sy_newline=rb_intern("newline");
    sy_number=rb_intern("number");
    sy_seq=rb_intern("seq");
    sy_sequence=rb_intern("sequence");
    sy_token=rb_intern("token");
    sy_until=rb_intern("until");
    rb_define_method(cls_Peridot_parser,"args",Peridot_parser_args,0);
    rb_define_method(cls_Peridot_parser,"atom",Peridot_parser_atom,0);
    rb_define_method(cls_Peridot_parser,"block",Peridot_parser_block,0);
    rb_define_method(cls_Peridot_parser,"body",Peridot_parser_body,0);
    rb_define_method(cls_Peridot_parser,"defi",Peridot_parser_defi,0);
    rb_define_method(cls_Peridot_parser,"defname",Peridot_parser_defname,0);
    rb_define_method(cls_Peridot_parser,"expr",Peridot_parser_expr,0);
    rb_define_method(cls_Peridot_parser,"expr_ar1",Peridot_parser_expr_ar1,0);
    rb_define_method(cls_Peridot_parser,"expr_ar2",Peridot_parser_expr_ar2,0);
    rb_define_method(cls_Peridot_parser,"expr_ar3",Peridot_parser_expr_ar3,0);
    rb_define_method(cls_Peridot_parser,"expr_ar4",Peridot_parser_expr_ar4,0);
    rb_define_method(cls_Peridot_parser,"expr_postfixed",Peridot_parser_expr_postfixed,0);
    rb_define_method(cls_Peridot_parser,"method",Peridot_parser_method,0);
    rb_define_method(cls_Peridot_parser,"name",Peridot_parser_name,0);
    rb_define_method(cls_Peridot_parser,"root",Peridot_parser_root,0);
    rb_define_method(cls_Peridot_parser,"sequence",Peridot_parser_sequence,0);
    rb_eval_string("testversionperidot('828c083e9cb0e1d505729f393bc8bc91')");
}
