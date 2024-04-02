#include <stdio.h>
int main()
{
    /*int a, b;
        printf("entet the any value ");
        scanf("%2d %3d", &a, &b);
        printf("a=%d", a);
        printf("b=%d", b);

        return 0;
        int a, b;
        printf("entet the any value\n");
        scanf("%d %d", &a, &b);
        printf("a=4%d", a);
        printf("b=2%d", b);
        */

    int a, b, c, sum;
    printf("entet the any value ");
    scanf("1%d %2d %3d", &a, &b, &c);
    sum = a + b + c;
    printf("%d", sum);
    return 0;
}
