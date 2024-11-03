#include<stdio.h>
int imax(int a, int b); //dummy name可以不与definition相匹配
int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3,5, imax(3,5)); //编译器会帮你检查参数
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(5,3)); //帮你自动转换成int类型
    return 0;
}

int imax(int n, int m)
{
    return (n > m ? n : m);
}