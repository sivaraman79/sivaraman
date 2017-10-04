#include <stdio.h>
int i,n,a[n];
int sum = 0
int main()
{
    printf("\n how many element u inserted?");
    scanf("%d",&n);
    printf("\n Enter the index values");
    scanf("%d %d %d %d %d",&a[n]);
    for(i=0;i<n;i++)
    {
        if(a[n]%2 == 0)
        {
       sum = sum + a[n];
       sum * = a[n-1];
       printf("\n the output is %d",sum);
        }
    }
    return 0;
}
