#include <stdio.h>

int main()
{
    char a=o,b=x, word[50];
    int i, freq = 0, flag = 0;
 
    printf("Enter character: ");
    scanf("%c", &a);
    printf("Now enter the word: ");
    scanf("%s", word);
    printf("Positions of '%c' in %s are: ", a, word);
    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == a)
        {
            a=a+1;
        }
        if(word[i] == b)
        {
            b=b+1;
        }
        
    }
    if (a == b)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nfalse");
    }
 
    return 0;
}
