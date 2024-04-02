#include <stdio.h>
int cheackRev(int x)
{
	int rev=0,rem;
	while(x!=0)
	{
		rem = x%10;
		rev =(rev*10)+rem;
		x = x/10;
	}
		printf("the reverse num is %d\n",rev);
	return;
}
int main()
{
	int n;
	printf("Enter the num\n");
	scanf("%d",&n);
	cheackRev(n);
	return 0;
}