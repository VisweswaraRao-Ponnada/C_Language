#include<stdio.h>
int main()
{
	int r, n, sum;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	{
		printf("%d",sum);
	}
}