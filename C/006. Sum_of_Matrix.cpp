#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j, s = 0; // r=row,c=column,s=sum
    printf("enter the order of matrix\n");
    scanf("%d %d", &r, &c);
    printf("enter the element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            s = s + a[i][j];
    }
    printf("sum=%d", s);
    return 0;
}