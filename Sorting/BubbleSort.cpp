#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j + 1], arr[j]);
                flag = 1;
            }
        }
        if( flag == 0)
            break;
        }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}