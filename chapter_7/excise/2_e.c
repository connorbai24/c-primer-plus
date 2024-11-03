#include <stdio.h>
#define STOP '#'

int main(void)
{
    int n = 0;
    char ch = 0;
    printf("please enter charater (q to quit).\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("%c: %d ", ch, ch);
        n++;
        if (n == 8)
        {
            printf("\n");
            n=0;
        }

    }


    return 0;
}