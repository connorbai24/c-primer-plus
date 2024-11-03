#include<stdio.h>
double power(double n, int p);  //note：格式关于call function
int main(void)
{
    double x, xpow;
    int exp;

    printf("enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q");
    printf(" to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2) //两个都满足才能为true
    {
        xpow = power(x,exp);    //对应关系，即x=n；exp=p
        printf("%.3g to the power %d is %.5f\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;   //思路：先写main函数，在main函数中用了不同的模块，即子函数
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;
    return pow;
}