#include<stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') //未输完就结束，由于最后的enter键造成
    {
        scanf("%d %d", &rows, &cols); //scanf会自动跳过空格键，tab键，enter键
        display((char)ch, rows, cols); //强制类型转换
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("bye.\n");

    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}