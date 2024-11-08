#include<stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
    int num;
    printf("this program calculates factorials.\n");
    printf("Enter a value in the range 0-12 (q to quit):\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("no negative numbers, please.\n");
        else if (num >12)
            printf("keep input under 13.\n");
        else
        {
            printf("loop: %d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit):\n");
    }
    printf("bye.\n");
    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;
    
    return ans;
}

long rfact(int n)
{
    long ans;
    if (n>1) // n也可以为一个变量
        ans = n * rfact(n-1); //如，return n* rfact(n-1);return本身做循环或迭代
    else
        ans = 1;

    return ans; //这种输入都是ans的，可以都替换为return
}