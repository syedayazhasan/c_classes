 #include <stdio.h>
int main()
{
    int i,j,n;
    int k;
    printf("Enter the number\n");
    scanf("%d",&n);
    k=n*2-1;
    for (i = 1; i <=k; i++)
    {
        for (j=1;j<=k;j++)
        {
            if (j==i||(j==k-i+1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}