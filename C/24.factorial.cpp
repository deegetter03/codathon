#include <stdio.h>
int main()
{
	int n, i; // n=number, f=factorial
	long int f = 1;
	printf("enter the number\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		f = f * i;
	printf("factorial=%ld", f);
	return 0;
}