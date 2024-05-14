#include <iostream>
using namespace std;

int main()
{
	int n, s;
	int sod(int); // sod=sum of digit
	cout << "enter the number\n";
	cin >> n;
	s = sod(n);
	cout << "sum of digit = " << s << endl;
}

int sod(int n)
{
	int s;
	if (n == 0)
		return 0;
	else
		return ((n % 10) + sod(n / 10));
}