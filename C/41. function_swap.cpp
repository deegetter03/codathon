#include <iostream>
using namespace std;
int main()
{
	int a, b;
	void swap(int, int);
	cout << "enter two number" << endl;
	cin >> a >> b;
	cout << "before swapping a=" << a << " ,b=" << b << endl;
	swap(a, b); // actual parameter
	return 0;
}
void swap(int a, int b) // formal parameter
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "after swapping a=" << a << " ,b=" << b;
}