#include <stdio.h>

int main() {
	
     int n;
     scanf("%d",&n);
     int last=n%10;
     int first=n;
     while(first>=10)
     {
         first =first/10;
     }
     printf("%d\n",first+last);
	
}
