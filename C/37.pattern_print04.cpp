#include <stdio.h>
int main()
{
	char ch;
	int n, i, j;
	printf("enter the height of pattern\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ch = 'A';
		for (j = 1; j <= i; j++)
		{
			printf("%c\t", ch++);
		}
		printf("\n");
	}
	return 0;
}