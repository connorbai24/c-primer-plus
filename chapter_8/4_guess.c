#include<stdio.h>
int main(void)
{
    int guess = 1;
    char response;
    
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == 'n') //确保输入开头为n或y
            printf("Well, then, is it %d?\n", ++guess);
        else
            printf("sorry, i understand only y or n.\n");
        while (getchar() != '\n')
            continue; //make sure 一长串的输入，和最后enter键输入问题
    }
        
    printf("I knew I could do it.\n");

    return 0;
}