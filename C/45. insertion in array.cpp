#include <iostream>
using namespace std;

int main()
{
	int i, n, item;
	int arr[] = {2, 4, 6, 8, 12};
	cout << "enter the number of element in array" << endl;
	cin >> n;
	cout << "elements in array are: " << endl;
	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
	cout << "enter the item" << endl;
	cin >> item;
	int pos = 2;
	for (i = n; i >= pos; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[2] = item;
	n = n + 1;
	cout << "element after insertion:" << endl;
	for (i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}