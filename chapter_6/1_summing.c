#include<stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("please enter next integer (q to enter): ");
        status = scanf("%ld", &num);
    }
    printf("those integers sum to %ld.\n", sum);

    return 0;
}