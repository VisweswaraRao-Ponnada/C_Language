#include<stdio.h>
int main(){
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'I':
			printf("Indigo");
			break;
		case 'B':
		   printf("Blue");
		   break;
	    case 'G':
	    	printf("Green");
	    case 'Y':
		   printf("Yellow");
		   break;
		case 'O':
		   printf("Orange") ;
		   break;
		case 'R':
		   printf("Red") ;
		   break;
		 default :
		 printf("invalid") ;      	
		   	
	}
	
}