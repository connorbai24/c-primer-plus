#include<stdio.h>
double min(double, double);
int main(void)
{
    double num1, num2;
    printf("enter two floating numbers:\n");
    scanf("%lf %lf", &num1, &num2); //double类型中一定要用%lf，用%f有问题
    printf("the min value of them is %lf\n", min(num1, num2));

    return 0;
}

double min(double a, double b)
{
    if (a < b)
        return a;
    else
        return b;
}