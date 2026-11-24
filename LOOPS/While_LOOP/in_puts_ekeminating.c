#include <stdio.h>

int main() {
	// your code goes here
       int t;
       scanf("%d",&t);
       while(t--)
       {
           int n;
           scanf("%d",&n);
           if(n%3==0)
           {
               printf("YES\n");
           }
           else 
           {
               printf("NO\n");
           }
       }
}

