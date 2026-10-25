#include<stdio.h>
int main(){
	float cp,sp;
	scanf("%f%f",&cp,&sp);
	float loss=((cp-sp)/cp)*100.0;
	printf("%.2f",loss);
}