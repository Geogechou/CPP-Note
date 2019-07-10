#include<stdio.h>
enum COLOR{
	RED,BLUE,WHITE,BLACK,PINK
};
typedef enum COLOR color;
int main()
{
    //枚举量像结构体一样，使用enum COLOR，不能直接使用COLOR，除非经过typedef之后
    enum COLOR c=PINK;
	printf("%d\n", c);
    color b=BLUE;
    printf("%d\n", b);
    return 0;
}