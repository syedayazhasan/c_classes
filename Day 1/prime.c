#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=0;
    for (i=2;i<=n-1;i++)
    {
        if (n%i==0)
        {
            a=1;
            break;
        }
        
    }
    if (a==0)
    {
        printf(" this is a prime number");
    }
    else
    {
        printf(" this is not prime");
    }
    return 0;
}