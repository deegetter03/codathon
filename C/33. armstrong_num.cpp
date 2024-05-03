#include <stdio.h>
#include <math.h>
int main()
{
	int n, n1, n2, digit, c = 0, a = 0; // n=random number, n1,n2=to store value of n, c=counter, a=operation to store result
	printf("enter the number\n");
	scanf("%d", &n);
	n1 = n;
	n2 = n;
	while (n > 0)
	{
		c++;
		n = n / 10;
	}
	while (n1 > 0)
	{
		digit = n1 % 10;
		a = a + pow(digit, c);
		n1 = n1 / 10;
	}
	if (n2 == a)
		printf("ARMSTRONG NUMBER");
	else
		printf("NOT A ARMSTRONG NUMBER");
	return 0;
}