#include <stdio.h>
int main()
{
    int n, i;
    int fib(int);
    printf("enter terms\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d\t", fib(i));
    return 0;
}
int fib(int n)
{
    static int a = 0, b = 1, c;
    if (n == 1)
        return a;
    else if (n == 2)
        return b;
    else
    {
        c = a + b;
        a = b;
        b = c;
        return c;
    }
}