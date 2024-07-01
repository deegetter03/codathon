#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n) {
    
    for( int i = 0; i<=n-1; i++){
        int j=i;
        while( j>0 && arr[j-1] > arr[j]){
            swap( arr[j-1], arr[j]);
            j--;
        }
    }


    // for (int i = 1; i < n; i++) {
    //     int key = arr[i];
    //     int j = i - 1;

    //     while (j >= 0 && arr[j] > key) {
    //         arr[j + 1] = arr[j];
    //         j = j - 1;
    //     }
        
    //     arr[j + 1] = key;
    // }
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

    InsertionSort(arr, n);

    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}