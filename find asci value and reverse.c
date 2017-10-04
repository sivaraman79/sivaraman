#include <stdio.h>

int main()
{
        int sum = 0, i, len;

    char string[100];
    printf("Enter the string : ");
    scanf("%[^\n]s", string);
        len = strlen(string);
    for (i = 0; i < len; i++)

    {

        sum = sum + string[i];

    }
    if(sum%2==0)
    {
        printf("\n%d",sum);
    }
    else
    printf("\n%s",string);
    //printf("\nSum of all characters : %d ",sum);
}
