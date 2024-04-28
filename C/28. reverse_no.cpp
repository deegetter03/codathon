#include <stdio.h>
int main()
{
	int n, digit, rev = 0;
	printf("enter the number\n");
	scanf("%d", &n);
	while (n > 0)
	{
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("reverse no = %d", rev);
	return 0;
}