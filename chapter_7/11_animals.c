#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and i will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#') //char类型都要用‘’
    {
        if ('\n' == ch) //neglect the rest of them, and start a new iteration/loop
            continue;
        if (islower(ch))
            switch (ch)
            {
                case 'a':
                    printf("argali, a wild sheep of asia\n");
                    break;
                case 'b':
                    printf("babirusa, a wild pig of malay\n");
                    break;
                case 'c':
                    printf("coati, tacoonlike mammal\n");
                    break;
                case 'd':
                    printf("desman, aquatic, molelike critter\n");
                    break;
                case 'e':
                    printf("echidna, the spiny anteater\n");
                    break;
                default :
                    printf("that's a stumper!\n");
                    //break;     可以有，也可以没有，因为break要跳出statement，
                    //而这是最后一句，执行完后也会跳出
            }
        else
            printf("i recognize only lowercase letters.\n");
        while (getchar() != '\n')
            continue;
        printf("Please type another letter or a #.\n");
    }
    printf("bye.\n");

    return 0;
}