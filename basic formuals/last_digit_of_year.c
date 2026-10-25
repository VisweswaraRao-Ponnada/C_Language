#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	int last=year%100;
	printf("%03d",last);
}