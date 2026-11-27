#include<stdio.h>
int main(){
	int F;
	scanf("%d",&F);
	float t=(F-32);
	float c=t*(0.5555);//(5/9)=0.5555
	printf("%.2f",c);
}