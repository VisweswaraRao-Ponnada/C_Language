#include<stdio.h>
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	int chair=(x-y);
	if(x>y)
	{
		printf("%d",chair);
	}
	else
	{
		printf("0");
	}
}