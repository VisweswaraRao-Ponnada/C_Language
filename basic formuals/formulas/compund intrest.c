#include<stdio.h>
#include<math.h>
int main(){
	int p,r,t;
	scanf("%d%d%d",&p,&r,&t);
	float amount=pow(((100+r)/100.0),t);
	float ci=(p*amount-p);
	printf("%.2f",ci);
}