#include<stdio.h>
int main(){
	int end,i,n;
	scanf("%d%d",&n,&end);
		for (i=1; i<=end; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}