#include <stdio.h>
int main()
{
	int n, n1, d, rev = 0; // n1=to store value of n, d=to store divide value
	printf("enter the number\n");
	scanf("%d", &n);
	n1 = n;
	while (n > 0)
	{
		d = n % 10;
		rev = rev * 10 + d;
		n = n / 10;
	}
	printf("reverse no.=%d\n", rev);
	if (n1 == rev)
		printf("palindrome number");
	else
		printf("not a palindrome number");
	return 0;
}