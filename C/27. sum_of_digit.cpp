#include <stdio.h>
int main()
{
	int n, s = 0, d; // s=sum
	printf("enter the number\n");
	scanf("%d", &n);
	while (n > 0)
	{
		d = n % 10; // breaks the number
		s = s + d;
		n = n / 10;
	}
	printf("sum of digit = %d", s);
	return 0;
}