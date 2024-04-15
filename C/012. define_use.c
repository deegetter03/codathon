#include <stdio.h>
#define a 5
void fun();
int main()
{
#define a 7
  printf("%d", a);
  fun();
#define a 3
  printf("%d", a);
}
void fun()
{
  printf("%d", a);
}