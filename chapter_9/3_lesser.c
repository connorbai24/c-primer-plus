#include<stdio.h>
int imin(int, int); //这里可以不写
int main(void)
{
    int evil1,evil2;

    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", evil1,evil2, imin(evil1,evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

int imin(int n, int m) //但这里需明确argument parameter
{
    int min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}