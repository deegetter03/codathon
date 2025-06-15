#include <bits/stdc++.h>
using namespace std;

void decimal2bit(int n)
{
    int num[32];
    int i = 0;
    while (n > 0)
    {
        num[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << num[j];
    }
}
int main()
{
    int n;
    cin >> n;
    decimal2bit(n);
    return 0;
}