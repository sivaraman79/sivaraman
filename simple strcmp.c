#include <stdio.h>

int main()
{
   char a[30];
   char d[30] = "aaabbbbhaijjjm";
   printf("Enter the print color format\n");
   gets(a);
    if (strcmp(a,d) == 0)
      printf("S = %s\n",d);
   else
      printf("Entered strings are not equal.\n");
 
   return 0;
}
