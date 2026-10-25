#include<stdio.h>
int main(){
	int a=436,b=200,c=529;
	int d=(a++)+(c--)-(b++);
	int e=(--a)-(b--);
	int f=(a++)+(c++);
	int g=(b++)-(a--);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d",g);
	
}