#include <stdio.h>
int main () {
    int n,i=1,fact=1;
    printf("enter a number: ");
    scanf ("%d",&n);
    while (i<=n)
    {
        fact=fact*i;
        i=i+1;
    }
    printf ("\n factorial= %d",fact);
return 0;
}