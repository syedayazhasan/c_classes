#include<stdio.h>
int main()
{
    int n,r;
    int i,a=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    do{
        r = r%10;
        n = n/10;
        printf("%d", n);
        while(n!=0){
            if(n%2!=0){
                pritnf("odd");
            }
            else
            printf("even");
        }
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
        
    }while(n>0);
}
