#include <stdio.h>
int main()
{
	int n;
	printf("enter the number\n"); // even odd without %
	scanf("%d", &n);
	if ((n / 2) * 2 == n)
		printf("even");
	else
		printf("odd");
	return 0;
}