#include <iostream>
using namespace std;

int main()
{
	float s = 0.0;
	int n, i, j, f = 1;
	cout << "enter the value of n" << endl; // s=1/1!+2/2!+3/3!+.....n/n!
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			f = f * j;
		}
		s = s + float(i / f);
	}
	cout << "sum of series = " << s;
	return 0;
}