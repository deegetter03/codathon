#include <iostream>
using namespace std;

int main()
{
	int i, n;
	int fib(int);
	cout << "enter terms\n";
	cin >> n;
	for (i = 1; i <= n; i++)
		cout << fib(i) << "\t"; // function calling
	return 0;
}

int fib(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}