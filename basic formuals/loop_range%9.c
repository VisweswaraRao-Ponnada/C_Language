#include<stdio.h>
int main(){
	int i,start,end;
	scanf("%d%d",&start,&end);
	for (i=start; i<=end; i++)
	{
		if(i%9==0)
		{
			printf("%d ",i);
		}
	}
}