#include <stdio.h>
#include <string.h>

int main()
{
    char s[50], rev[50];

    scanf("%s", s);
    strcpy(rev, s);
    strrev(rev);

    if(strcmp(s, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
