#include<stdio.h>
int main(void)
{
    int n =3;   //此程序说明：only 1 can make statement false; 
                //any numbers except 0 can make statement true.

    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n=-3;
    while(n)
        printf("%2d is ture\n", n++);
    printf("%2d is false\n", n);

    return 0;
}