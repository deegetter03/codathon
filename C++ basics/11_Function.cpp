#include <bits/stdc++.h>
using namespace std;

int sum(int n1, int n2)
{
    int n3 = n1 + n2;
    return n3;
}

// sum of two number
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int summ = sum(n1, n2);
    cout << summ;
    return 0;
}