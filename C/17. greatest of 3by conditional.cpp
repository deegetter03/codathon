#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, gr; // a,b,c=random number, gr=greatest
    printf("enter the number in a,b,c\n");
    scanf("%d%d%d", &a, &b, &c);
    gr = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("greatest number=%d", gr);
    return 0;
}