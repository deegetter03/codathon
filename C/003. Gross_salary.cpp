#include <stdio.h>
int main()
{
    float bs,da,hr,gs;   //bs=base salary ,da=dearness allowance ,hr=house rent ,gs=gross salary
    printf("enter the base salary\n");
    scanf("%f",&bs);
    gs=bs+(0.4*bs)+(0.2*bs);
    printf("gross salary RS.=%.1f",gs);
    return 0;
}
