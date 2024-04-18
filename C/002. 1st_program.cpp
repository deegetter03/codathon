#include <stdio.h>
int main()
{
   int p,n;  //p=principle ,n=time
   float r,si;  //r=rate , si=simple interest
   printf("enter the value of principal,time,rate\n");
   scanf("%d %d %f",&p,&n,&r);
   si=p*n*r/100; //formula of SI
   printf("%f\n",si);
    return 0;
}
