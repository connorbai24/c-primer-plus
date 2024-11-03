#include<stdio.h>
int main(void)
{
    int n = 0;
    int odd = 0;
    int sum_odd = 0;
    int even = 0;
    printf("enter a list of numbers.(0 to quit)\n");
    while (scanf("%d", &n) == 1 && n != 0)
    {
        if (n%2 == 0)
        {   
            odd++;
            sum_odd += n;
        }
        else
            even++;
    }
    printf("odd: %d; even: %d; average of odd: %.2f \n", odd, even, sum_odd / (float)odd);

    return 0;
}