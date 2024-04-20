#include <stdio.h>
int main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("character is in upper case %c", ch);

	else if (ch >= 'a' && ch <= 'z')
		printf("character is in lower case %c", ch);

	else if (ch >= '0' && ch <= '9')
		printf("character is a digit %c", ch);

	else
		printf("character is a special case");
	return 0;
}