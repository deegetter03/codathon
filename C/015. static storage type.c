#include <stdio.h>
int main()
{
    int i;
    void fun();
    for (i = 1; i <= 3; i++)
        fun();
}
void fun()
{
    static int j = 1;
    int k = 1;
    printf("\nj=%d\t k=%d", j, k);
    j++;
    k++;
}