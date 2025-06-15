#include <bits/stdc++.h>
using namespace std;

bool LinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Element to be found: ";
    int key;
    cin >> key;

    bool found = LinearSearch(arr, n, key);
    if (found)
        cout << "Element is Present" << endl;
    else
        cout << "Element is not present" << endl;
}