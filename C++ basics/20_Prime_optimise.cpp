#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false; // 0 and 1 are not prime numbers
    }

    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            return false; // If n is divisible by any number between 2 and sqrt(n), it's not prime
        }
    }
    return true;
}

int main()
{
    cout << isPrime(7) << endl;  // Output: 1 (true)
    cout << isPrime(12) << endl; // Output: 0 (false)
    return 0;
}