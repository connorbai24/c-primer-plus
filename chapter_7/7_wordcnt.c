#include<stdio.h>
#include<ctype.h>   // for isspace()
#include<stdbool.h>
#define STOP '|'
int main(void)
{
    char c; // read in character
    char prev;  // previous character read
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;    // == true if c is in a word

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((c= getchar()) != STOP)
    {
        n_chars++;
        if (c== '\n')
            n_lines++;
        if (!isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }

    if (prev != '\n')
        p_lines = 1;
    printf("charactors = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}