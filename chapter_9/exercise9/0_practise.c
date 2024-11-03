#include<stdio.h>
void showmenu(void);
int enter(int, int);
int main(void)
{
    showmenu();
    while(enter(1,4) != 4)
    {
        printf("good choice.\n");
        showmenu();
    }
    printf("bye.\n");

    return 0;
}

void showmenu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files 2) move files\n");
    printf("3) remove files 4) quit\n");
    printf("Enter the number of your choice:\n");
}

int enter(int x, int y)
{
    int n, num;
    while ((n = scanf("%d", &num)) == 1 && (num < x || num > y)) //虽然可以直接使用1，4，但。。
    {
        printf("it is an invaild number. try again.\n");
        showmenu();
    }
    if (n != 1)
    {
        num = 4;
    }
    
    return num;
}