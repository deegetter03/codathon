#include <stdio.h>
int main()
{
    int a0h, a0w, a1h, a1w, a2h, a2w;
    a0h = 1189;
    a0w = 841;
    printf("paper size of a0 is %dmm*%dmm\n", a0h, a0w);
    a1h = a0w;
    a1w = a0h / 2;
    printf("paper size of a1 is %dmm*%dmm\n", a1h, a1w);
    a2h = a1w;
    a2w = a1h / 2;
    printf("paper size of a2 is %dmm*%dmm", a2h, a2w);
    return 0;
}