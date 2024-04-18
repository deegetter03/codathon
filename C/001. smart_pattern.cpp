#include <stdio.h>
int main()
{
    char c='*';
    printf("%4c\n",c);
    printf("%3c%c%-3c\n",c,c,c);
    printf("%2c%c%c%c%c\n",c,c,c,c,c);
    printf("%2c%c%c%c%c\n",c,c,c,c,c);
    printf("%3c%c%-3c\n",c,c,c);
    printf("%4c\n",c);
    return 0;
}
