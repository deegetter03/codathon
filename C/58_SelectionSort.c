#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, position, temp, a[100], d, n;

    printf("Enter The No. Of Elements\n");
    scanf("%d", &n);
    printf("Enter %d Integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[position])
                position = j;
        }

        temp = a[i];
        a[i] = a[position];
        a[position] = temp;
    }
    printf("Sorted List in Ascending Order is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}