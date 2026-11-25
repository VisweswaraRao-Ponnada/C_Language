#include<stdio.h>
#include<string.h>
int main(){
	//string length
	 char str[200];
	 scanf("%s",str);
	 int len=strlen(str);
	
	printf("Length of  a string :%d\n",len);
	
	
	//string reverse
	
	printf("Before strrev :%s\n",str);
	strrev(str);
	printf("After strrev  :%s\n",str);
	
	
}