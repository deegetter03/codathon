#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int a;
    cout << "enter the number" << endl;
    cin >> a;
    cout << "the factorial of " << a << " is " << factorial(a) << endl;
    cout << "the fibonacci of " << a << " is " << fib(a) << endl;
}