#include<stdio.h>
int main(void) //using ctrl+z to close the program
{
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);
    
    return 0;
}