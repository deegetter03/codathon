#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            // swap( arr[i], arr[i+1]);
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {7, 6, 5, 4, 3, 2, 1};

    swapAlternate(even, 8);
    print(even, 8);
    cout << endl;

    swapAlternate(odd, 7);
    print(odd, 7);
}