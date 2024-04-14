#include <stdio.h>
int main()
{
	int n, i; // n= table number
	printf("enter the number you want multiplication table of: ");
	scanf("%d", &n);
	printf("the table of %d\n", n);
	for (i = 1; i <= 10; i++)
		printf("%d*%d=%d\n", n, i, n * i);
	return 0;
}