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
    }while(n>0);
}
