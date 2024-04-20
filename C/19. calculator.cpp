#include <stdio.h>
int main()
{
	char op; // op=operator ,a,b=random number, c=to store result
	int a, b, c;
	float d;
	printf("enter any one operation from +,-,*,/,% \n");
	scanf("%c", &op);
	printf("enter the value of two no.");
	scanf("%d %d", &a, &b);
	if (op == '+')
	{
		c = a + b;
		printf("c=%d", c);
	}
	else if (op == '-')
	{
		c = a - b;
		printf("c=%d", c);
	}
	else if (op == '*')
	{
		c = a * b;
		printf("c=%d", c);
	}
	else if (op == '/')
	{
		d = (a / b);
		printf("d=%.1f", d);
	}
	else if (op == '%')
	{
		c = a % b;
		printf("c=%d", c);
	}
	else
	{
		printf("not a valid operator");
	}
	return 0;
}