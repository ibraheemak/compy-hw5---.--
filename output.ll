declare i32 @printf(i8*, ...)
declare void @exit(i32)
declare i32 @scanf(i8*, ...)
@.str_zeroDiv = internal constant [23 x i8] c"Error division by zero\00"
@global_bool_flag = global i1 false
@global_bool_relop = global i1 false
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
define i32 @main(){
entry_label:
%t0 = trunc i32 1 to i8
%t1_var1 = alloca i8
store i8 %t0, i8* %t1_var1
%t2 = trunc i32 1 to i8
%t3_var2 = alloca i8
store i8 %t2, i8* %t3_var2
%t4 = trunc i32 1 to i8
%t5 = trunc i32 1 to i8
%t7 = icmp eq i8 %t5, 0
br i1 %t7, label %label_18, label %label_19
label_18:
call void @print(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str_zeroDiv, i32 0, i32 0))
call void @exit(i32 1)
unreachable
label_19:
%t6 = udiv i8 %t4, %t5
%t8_vars = alloca i8
store i8 %t6, i8* %t8_vars
%t9 = load i8, i8* %t8_vars
%t11 = zext i8 %t9 to i32
call void @printi(i32 %t11)
%t12 = add i32 0, 5
%t13 = load i8, i8* %t3_var2
%t14 = load i8, i8* %t1_var1
%t15 = sub i8 %t13, %t14
%t16 = zext i8 %t15 to i32
%t18 = icmp eq i32 %t16, 0
br i1 %t18, label %label_52, label %label_53
label_52:
call void @print(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str_zeroDiv, i32 0, i32 0))
call void @exit(i32 1)
unreachable
label_53:
%t17 = sdiv i32 %t12, %t16
%t19_x = alloca i32
store i32 %t17, i32* %t19_x
%t20 = add i32 0, 5
%t21 = load i8, i8* %t3_var2
%t22 = load i8, i8* %t1_var1
%t23 = sub i8 %t21, %t22
%t25 = zext i8 %t23 to i32
%t26 = icmp eq i32 %t25, 0
br i1 %t26, label %label_74, label %label_75
label_74:
call void @print(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str_zeroDiv, i32 0, i32 0))
call void @exit(i32 1)
unreachable
label_75:
%t24 = sdiv i32 %t20, %t25
%t27_y = alloca i32
store i32 %t24, i32* %t27_y
br label %func_end
func_end:
ret i32 0
}
