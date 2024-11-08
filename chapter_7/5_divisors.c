#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    unsigned long num, div;
    bool isPrime;

    printf("Please enter an integer for analysis; ");
    printf("Enter q to quit.\n");
    while (scanf("%lu", &num) == 1)
    {
        for(div=2, isPrime = true; div*div<=num; div++)
        {
            if (num%div == 0)
            {
                if ((div*div != num))
                    printf("%lu is divisible by %lu and %lu.\n",
                        num, div, num / div);
                else 
                    printf("%lu is divisible by %lu.\n", num, div);
                isPrime = false;
            }   
        }
        if (isPrime)
            printf("%lu is prime.\n", num);
        printf("please enter another integer for analysis; ");
        printf("enter q to quit\n");
    }
    printf("bye!\n");

    return 0;
}