int main()
{
    int n;
    printf("Enter the num\n");
    scanf("%d", &n);
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    printf("reverse num is %d\n", rev);
    return 0;
}