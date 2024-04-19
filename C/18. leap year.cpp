#include <stdio.h>
#include <math.h>
int main()
{
	int yr;
	printf("enter the year\n");
	scanf("%d", &yr);
	if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
		printf("given year is leap year\n");
	else
		printf("not a leap year");
	return 0;
}