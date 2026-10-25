#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int s=(a+b+c)/2;
	scanf("%d%d%d%d",&a,&b,&c,&s);
	float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
}