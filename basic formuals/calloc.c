#include<stdio.h>
#include<stdlib.h>
int main(){
	
		int *arr,n,sum=0;
		scanf("%d",&n);
		arr=calloc(n,sizeof(int));
		for(int i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
			sum=sum+arr[i];
		}
		printf("%d",sum);
		free(arr);
		
		
	
	}
	
