declare i32 @printf(i8*, ...)
declare void @exit(i32)
declare i32 @scanf(i8*, ...)
@.str_zeroDiv = internal constant [23 x i8] c"Error division by zero\00"
@global_bool_flag = global i1 false
@.str_specifier = private unnamed_addr constant [4 x i8] c"%s\0A\00", align 1
@.int_specifier = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.int_specifier_scan = private unnamed_addr constant [3 x i8] c"%d\00", align 1
define void @print(i8*) {
  %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.str_specifier, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* %spec_ptr, i8* %0)
  ret void
}
define void @printi(i32) {
  %spec_ptr = getelementptr [4 x i8], [4 x i8]* @.int_specifier, i32 0, i32 0
  call i32 (i8*, ...) @printf(i8* %spec_ptr, i32 %0)
  ret void
}
define i32 @readi() {
  %spec_ptr = getelementptr [3 x i8], [3 x i8]* @.int_specifier_scan, i32 0, i32 0
  %num = alloca i32
  call i32 (i8*, ...) @scanf(i8* %spec_ptr, i32* %num)
  %result = load i32, i32* %num
  ret i32 %result
}
@.t0 = internal constant [33 x i8] c"Fibonacci numbers (alternative):\00"
@.t10 = internal constant [18 x i8] c"CHECK CHECK CHECK\00"
@.t19 = internal constant [18 x i8] c"CHECK CHECK CHECK\00"
define i32 @main(){
entry_label:
call void @print(i8* getelementptr ([33 x i8], [33 x i8]* @.t0, i32 0, i32 0))
%t2 = add i32 0, 20
%t3_MaxFibNumberToPrint = alloca i32
store i32 %t2, i32* %t3_MaxFibNumberToPrint
%t4 = add i32 0, 1
%t5_whichFibNumber = alloca i32
store i32 %t4, i32* %t5_whichFibNumber
br label %label_23
label_23:
br label %label_21
label_20:
store i1 true, i1* @global_bool_flag
br label %label_24
label_21:
store i1 false, i1* @global_bool_flag
br label %label_24
label_24:
%t6_stop1 = alloca i1
%t7 = load i1, i1* @global_bool_flag
store i1 %t7, i1* %t6_stop1
br label %label_30
label_30:
br label %label_28
label_27:
store i1 true, i1* @global_bool_flag
br label %label_31
label_28:
store i1 false, i1* @global_bool_flag
br label %label_31
label_31:
%t8_stop2 = alloca i1
%t9 = load i1, i1* @global_bool_flag
store i1 %t9, i1* %t8_stop2
call void @print(i8* getelementptr ([18 x i8], [18 x i8]* @.t10, i32 0, i32 0))
br label %label_43
label_43:
br label %label_47
label_47:
%t12 = load i1, i1* %t6_stop1
br i1 %t12, label %label_44, label %label_45
br label %label_44
label_44:
br label %label_51
label_51:
%t13 = load i1, i1* %t8_stop2
br i1 %t13, label %label_48, label %label_49
label_45:
br label %label_49
br label %label_48
label_49:
%t14 = load i32, i32* %t5_whichFibNumber
%t15 = load i32, i32* %t3_MaxFibNumberToPrint
%t16 = icmp eq i32 %t14, %t15
br label %label_68
label_68:
br label %label_75
label_75:
%t17 = load i1, i1* %t6_stop1
br i1 %t17, label %label_72, label %label_73
%t18 = xor i1 %t17, true
br i1 %t18, label %label_73, label %label_72
label_69:
br label %label_72
label_73:
call void @print(i8* getelementptr ([18 x i8], [18 x i8]* @.t19, i32 0, i32 0))
br label %label_97
label_97:
br label %label_94
label_94:
store i1 true, i1* %t6_stop1
br label %label_98
label_95:
store i1 false, i1* %t6_stop1
br label %label_98
label_98:
br label %label_43
br label %label_82
label_72:
br label %label_102
label_102:
%t21 = load i1, i1* %t6_stop1
br i1 %t21, label %label_99, label %label_100
br i1 %t21, label %label_99, label %label_100
br i1 %t21, label %label_99, label %label_100
label_99:
%t22 = load i32, i32* %t5_whichFibNumber
%t23 = load i32, i32* %t3_MaxFibNumberToPrint
%t24 = icmp eq i32 %t22, %t23
store i1 %t24, i1* %t8_stop2
br label %label_43
br label %label_101
label_100:
br label %label_101
label_101:
br label %label_82
label_82:
%t25 = add i32 0, 1
%t26_index = alloca i32
store i32 %t25, i32* %t26_index
%t27 = add i32 0, 0
%t28_prevNum = alloca i32
store i32 %t27, i32* %t28_prevNum
%t29 = add i32 0, 1
%t30_currNum = alloca i32
store i32 %t29, i32* %t30_currNum
%t31_temp = alloca i32
store i32 0, i32* %t31_temp
br label %label_131
label_131:
%t32 = load i32, i32* %t26_index
%t33 = load i32, i32* %t5_whichFibNumber
%t34 = icmp slt i32 %t32, %t33
br i1 %t34, label %label_140, label %label_141
br i1 %t34, label %label_140, label %label_141
br i1 %t34, label %label_140, label %label_141
label_140:
%t35 = load i32, i32* %t30_currNum
%t36 = load i32, i32* %t28_prevNum
%t37 = add i32 %t35, %t36
store i32 %t37, i32* %t31_temp
%t38 = load i32, i32* %t30_currNum
store i32 %t38, i32* %t28_prevNum
%t39 = load i32, i32* %t31_temp
store i32 %t39, i32* %t30_currNum
br label %label_170
label_170:
%t40 = load i1, i1* %t6_stop1
br i1 %t40, label %label_167, label %label_168
br i1 %t40, label %label_167, label %label_168
br i1 %t40, label %label_167, label %label_168
label_167:
br label %label_130
br label %label_169
label_168:
%t41_x = alloca i32
store i32 0, i32* %t41_x
br label %label_169
label_169:
%t42 = load i32, i32* %t26_index
%t43 = add i32 0, 1
%t44 = add i32 %t42, %t43
store i32 %t44, i32* %t26_index
br label %label_131
label_141:
br label %label_142
label_142:
br label %label_130
label_130:
%t45 = load i32, i32* %t30_currNum
call void @printi(i32 %t45)
%t47 = load i32, i32* %t5_whichFibNumber
%t48 = add i32 0, 1
%t49 = add i32 %t47, %t48
store i32 %t49, i32* %t5_whichFibNumber
br label %label_43
label_48:
br label %label_58
label_58:
br label %label_42
label_42:
br label %func_end
func_end:
ret i32 0
}
