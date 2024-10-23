#include <bits/stdc++.h>
using namespace std;

int partition( vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j)
    {
        while( arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while( arr[j] > pivot && j >= low+1) 
        {
            j--;
        }
        if(i < j)
        {
            swap( arr[i],arr[j]);
        }
    }
    swap( arr[low],arr[j]);
    return j;
}

void quickSort( vector<int> &arr, int low, int high)
{
    if( low < high)
    {
        int q = partition(arr, low, high);
        quickSort( arr, low, q-1);
        quickSort( arr, q+1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    quickSort(arr, 0, arr.size() - 1);
    return arr;
}

int main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> arr;
    cout << " Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
    }
    cout << endl;

    arr = quickSort(arr);
    cout << "After Using quick sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}