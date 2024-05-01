#include <stdio.h>
int main()
{
	int a[100], n, i, j, min, temp;
	printf("enter the size of array:\n");
	scanf("%d", &n);
	printf("enter the element of array::");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}