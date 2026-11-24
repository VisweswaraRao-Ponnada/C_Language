#include<stdio.h>
int main(){
	int i=1,n,count=0;
	scanf("%d",&n);
	while (i<=n)
	{
		if(i%2==0)
		{
			printf("%d ",i);
			count++;
		}
		i++;
	}
	printf("\ncount: %d",count);
}