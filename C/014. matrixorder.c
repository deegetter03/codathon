#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j; // r=row, c=column
    printf("enter the order of matrix\n");
    scanf("%d %d", &r, &c);
    printf("enter the elements\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\n elements of matrix are\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}