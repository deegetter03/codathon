#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], c[10][10]; // r1=row1, r2=row2, c1=column1, c2=column2, rr= resultant_row, rc=resultant_column
    int r1, c1, r2, c2, rr, rc, i, j;
    printf("enter the order of both matrix\n");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    if (r1 != r2 || c1 != c2)
    {
        printf("add is not possible");
        exit(0);
    }
    printf("enter the element of 1st matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    }
    printf("enter the element of 2nd matrix\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    }
    rr = r1;
    rc = c1;
    for (i = 0; i < rr; i++)
    {
        for (j = 0; j < rc; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    printf("the resultant matrix is:\n");
    for (i = 0; i < rr; i++)
    {
        for (j = 0; j < rc; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}