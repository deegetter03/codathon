#include <stdio.h>
int main()
{
    int a[10][10], t[10][10], r, c, i, j; // r=row, c=column, t=transpose
    printf("enter the order of matrix\n");
    scanf("%d %d", &r, &c);
    printf("enter the element\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            t[i][j] = a[j][i];
    }
    printf("transpose of the matrix is\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
            printf("%d\t", t[i][j]);
        printf("\n");
    }
    return 0;
}