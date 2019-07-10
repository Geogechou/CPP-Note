#include<stdio.h>
int main(int argc,char** argv,char** env)
{
    //打印命令行参数
    for(int i=0;i<argc;i++)
        printf("%s\n",argv[i]);
    //打印环境变量
    while(*env)
        puts(*env++);
    return 0;
}