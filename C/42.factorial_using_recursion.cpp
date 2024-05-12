#include <iostream>
using namespace std;

int main()
{
	int n;
	long int f;
	long int fact(int);
	cout << "enter the number\n";
	cin >> n;
	f = fact(n);
	cout << "factorial = " << f << endl;
	return 0;
}

long int fact(int n)
{
	if (n == 0 || n == 1) // base case
		return 1;
	else
		return (n * fact(n - 1));
}