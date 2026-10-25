#include<stdio.h>
#include<stdlib.h>
int main(){
	{
		int *arr,n;
		scanf("%d",&n);
		arr=malloc(n*sizeof(int));
		for(int i=0; i<n; i++)
		{
			scanf("%d",&arr[i]);
		}
		for(int i=0; i<n; i++)
		{
			if(arr[i]%2==0)
			{
				printf("%d",arr[i]);
			}
		}
		free(arr);
	}
	
}