#include<stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("please enter an integer to be summed ");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &sum) == 1 );
    while (input_is_good)
    {
        sum = sum + num;
        printf("please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) ==1 );
    }
    printf("those integers sum to %ld.\n", sum);

    return 0;
}