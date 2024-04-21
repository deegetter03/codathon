#include <stdio.h>
int main()
{
	char op; // op=operator, a,b=random number, c=to store result
	int a, b, c;
	printf("enter the operator from +-*/%\n");
	scanf("%c", &op);
	printf("enter the two no.");
	scanf("%d%d", &a, &b);

	switch (op)
	{
	case '+':
		c = a + b;
		printf("sum=%d", c);
		break;

	case '-':
		c = a - b;
		printf("diff=%d", c);
		break;
	case '*':
		c = a * b;
		printf("multiplication=%d", c);
		break;
	case '/':
		c = a / b;
		printf("divisor=%d", c);
		break;
	case '%':
		c = a % b;
		printf("remainder=%d", c);
		break;
	default:
		printf("invalid operator");
	}
	return 0;
}