#include<stdio.h>
int main(void)
{
    long num;
    long sum = 0L;  //it is the same with example 1.
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) //问题程序，即while中应该去判断，应为==
    {
        sum = sum + num;
        printf("please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("those integers sum to %ld.\n", sum);

    return 0;
}