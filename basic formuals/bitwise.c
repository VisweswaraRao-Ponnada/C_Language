#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int AND=(a&b);
	int OR=(a|b);
	int X_OR=(a^b);
	int left_shift=(a<<b);
	int right_shift=(a>>b);
	printf("%d %d %d %d %d",AND,OR,X_OR,left_shift,right_shift);
}