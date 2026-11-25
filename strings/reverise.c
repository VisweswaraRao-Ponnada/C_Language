#include<stdio.h>
#include<string.h>
int main(){
	char str[100]="Hello World !";
	printf("Before strrev :%s\n",str);
	strrev(str);
	printf("After strrev  :%s\n",str);
	
}