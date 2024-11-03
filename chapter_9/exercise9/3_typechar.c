#include<stdio.h>
void character(char, int, int);
int main(void)
{
    char ch;
    int row, column;
    printf("enter char, numbers in order:\n");
    while(scanf("%c %d %d", &ch, &row, &column) == 3)
    {
        character(ch, row, column);
        printf("(q to quit.)\n");
    }
    printf("bye.\n");

    return 0;
}

void character(char a, int b, int c)
{
    int n1;
    int n2;

    for (n1=1; n1 <= b; n1++)
    {
        for (n2=1; n2 <= c; n2++)
            putchar(a);
        putchar('\n');
    }

    return;
}