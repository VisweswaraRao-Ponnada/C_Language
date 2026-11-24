#include<stdio.h>
int main(){
	int i,j,n;
	scanf("%d",&n);
	char ch='A'+(n-1);
	for (i=1; i<=n; i++)
	{
	    
		for(j=1; j<=i; j++)
		{
			printf("%c ",ch);
		}
		ch--;     
		printf("\n");
	}
}