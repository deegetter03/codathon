#include <stdio.h>

void quicksort(int a[100], int low, int high)
{
  int i, j, pivot, temp;
  if (low < high)
  {
    pivot = low;
    i = low;
    j = high;

    while (i < j)
    {
      while (a[i] <= a[pivot] && i < high)
        i++;

      while (a[j] > a[pivot])
        j--;

      if (i < j)
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }

    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;

    quicksort(a, low, j - 1);
    quicksort(a, j + 1, high);
  }
}

int main()
{
  int i, n, a[100];
  printf("Enter the size: ");
  scanf("%d", &n);
  printf("Enter elements in array: ");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

  quicksort(a, 0, n - 1);

  printf("The Sorted Order is: ");
  for (i = 0; i < n; i++)
    printf(" %d", a[i]);
  return 0;
}