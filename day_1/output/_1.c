 #include <stdio.h>
int main()
{
    // printf("1+1\n");
    // printf("Helloword\n");


    // printf("%d\n", sizeof(char));///%d会显示警告，%zu返回一个无符号数的整形


    //     printf("%zu\n", sizeof(short));
    //         printf("%d\n", sizeof(char));
    //             printf("%d\n", sizeof(char));
    //             printf("%zu\n",sizeof(long long));
    // return 0;

    // int num_1,num_2;
    // scanf("%d %d",&num_1,&num_2);
    // printf("%d",num_1+num_2);
    char arr_1[] = {'a','b','c','\0'};
    printf("%s\n",arr_1);


}


//字符数据类型
//char字符数据类型 short短整型 int整形 long长整型 long long长长整型
//float单精度浮点型 double双精度浮点型 long double长双

//变量，常量    局部变量，全局变量，静态变量

//当全局变量和局部变量同名时，局部变量优先级更高

//生命周期




///常量   ：：  字面常量：直接定义的数字，如30  abc字符也是   sonst 修饰的常变量  固定值 不可改变 丹仍然是变量
//#define 宏定义  定义的标识符常量#define MAX 100(定义max是个固定值常量)     枚举常量(enum)  定义的枚举常量

//字符串是以'\0'结尾的字符数组，字符串常量是以双引号括起来的字符序列，如"hello world"。字符串常量在内存中是不可修改的
//字符串常量的类型是char[]，它是一个字符数组，包含了字符串的内容和结尾的'\0'字符。  \0是字符串的结束标志，表示字符串的结尾。打印如果遇到/0才会停止  用vscode结果和老师的不一样








