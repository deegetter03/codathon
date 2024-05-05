#include <stdio.h>
int main()
{
	int n, i, j;
	printf("enter the height of pattern\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d\t", i);
		}
		printf("\n");
	}
	return 0;
}