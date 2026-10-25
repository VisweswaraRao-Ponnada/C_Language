#include<stdio.h>
int main(){
	int a,b,c;
	a=100;
	b=4000;
	c=5000;
	printf("%d",((a!=b)&&(c>=b)||((c!=b)&&(b!=200)))&&(a==c));
}