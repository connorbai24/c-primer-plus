#include<stdio.h>
int main(void)
{
    const int secret_code = 13; //it is the same function with 15; but more repetitive.
    //thus, if the condition must be excuated at least once, then using do-while.
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code)
    {
        printf("To enter the triskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congrantulations! You are cured!\n");

    return 0;
}