#include <stdio.h>

int main()
{
    int n, a; // n=size,a=to store divided value
    long int revr = 0;
    printf("enter 5 digit no less than 32767\n");
    scanf("%d", &n);
    a = n % 10;
    n = n / 10;
    revr = revr + a * 10000;

    a = n % 10;
    n = n / 10;
    revr = revr + a * 1000;

    a = n % 10;
    n = n / 10;
    revr = revr + a * 100;

    a = n % 10;
    n = n / 10;
    revr = revr + a * 10;

    a = n % 10;
    revr = revr + a * 1;

    printf("reversed number= %ld", revr);
    return 0;
}
