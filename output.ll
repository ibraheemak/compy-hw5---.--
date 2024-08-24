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
%t4 = add i32 0, 5
%t5 = load i8, i8* %t3_var2
%t6 = load i8, i8* %t1_var1
%t7 = sub i8 %t5, %t6
%t9 = zext i8 %t7 to i32
%t10 = icmp eq i32 %t9, 0
br i1 %t10, label %label_26, label %label_27
label_26:
call void @print(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str_zeroDiv, i32 0, i32 0))
call void @exit(i32 1)
unreachable
label_27:
%t8 = sdiv i32 %t4, %t9
%t11_y = alloca i32
store i32 %t8, i32* %t11_y
br label %func_end
func_end:
ret i32 0
}
