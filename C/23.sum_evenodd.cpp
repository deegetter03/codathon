#include <stdio.h>
int main()
{
	int n, i, se = 0, so = 0; // se=sumeven,so=sumodd
	printf("enter the number\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			se = se + i;
		else
			so = so + i;
	}
	printf("%d %d", se, so);
	return 0;
}