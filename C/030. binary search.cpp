#include <stdio.h>
int main()
{
    int a[100], i, n, lb, ub, mid, se; // lb=lower bound, ub=upper bound, se=to be searched
    printf("enter the size of array<=100\n");
    scanf("%d", &n);
    printf("enter the value of element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("enter the element to be searched: ");
    scanf("%d", &se);
    lb = 0;
    ub = n - 1;
    mid = (lb + ub) / 2;
    while ((lb <= ub) && (a[mid] != se))
    {
        if (se < a[mid])
            ub = mid - 1;
        else
        {
            lb = mid + 1;
        }
        mid = (lb + ub) / 2;
    }
    if (a[mid] == se)
        printf("found");
    else
        printf("not found");
    return 0;
}