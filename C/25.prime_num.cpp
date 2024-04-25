#include <stdio.h>
int main()
{
	int n, i, c = 0; // n=number, c= count
	printf("enter the number\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
			c++;
	}
	printf("c=%d\n", c);
	if (c == 2)
		printf("prime no");
	else
		printf("not a prime");
	return 0;
}