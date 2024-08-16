declare i32 @printf(i8*, ...)
declare void @exit(i32)
declare i32 @scanf(i8*, ...)
@.str_zeroDiv = internal constant [23 x i8] c"Error division by zero\00"
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
%val = alloca i1
store i1 true, i1* %val
%t0 = load i1, i1* %val
br i1 %t0, label %label_7, label %label_8
label_7:
call void @print(i8* )
br label %label_9
br label %label_9
label_8:
call void @print(i8* )
br label %label_9
br label %label_9
label_9:
br i1 true, label %label_24, label %label_25
label_24:
call void @print(i8* )
br label %label_26
br label %label_26
label_25:
label_26:
br i1 false, label %label_48, label %label_49
label_48:
br i1 true, label %label_40, label %label_49
label_49:
br label %label_50
label_50:
%t1 = phi i1 [ false, %label_49 ], [ true, %label_40 ]
br i1 false, label %label_58, label %label_57
label_57:
br i1 , label %label_58, label %label_36
label_58:
br label %label_59
label_59:
%t2 = phi i1 [ true, %label_58 ], [ false, %label_36 ]
br i1 , label %label_35, label %label_41
label_35:
call void @print(i8* )
br label %label_65
br label %label_65
label_41:
label_65:
ret i32 0
}
