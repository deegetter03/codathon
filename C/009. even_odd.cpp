#include <stdio.h>

int main()
{
	int a[100], i, n; // n=size
	printf("enter the size\n");
	scanf("%d", &n);
	printf("enter elements\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			printf("even\n");
		else
			printf("odd\n");
	}
	return 0;
}