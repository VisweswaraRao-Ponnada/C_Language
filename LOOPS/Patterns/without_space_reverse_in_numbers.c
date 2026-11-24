#include<stdio.h>
int main(){
	int i,space;
	int n;
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		for(space=1; space<=(n-i); space++)
		{
			printf(" ");
		}
		for(int j=1; j<=i; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}