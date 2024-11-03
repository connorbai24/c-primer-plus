#include<stdio.h>
int main(void)
{
    int n_sp, n_other, n_ent;
    n_sp = n_other = n_ent = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            n_ent++;
        else if (ch == ' ')
            n_sp++;
        else
            n_other++;
    }
    printf("others: %d; spaces are %d; enters are %d", n_other, n_sp, n_ent);

    return 0;
}