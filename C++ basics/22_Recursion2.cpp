#include <bits/stdc++.h>
using namespace std;

void fun(int i, int n)
{
    if (i > n)
        return;
    cout << "Rui" << endl;
    fun(i + 1, n);
}

int main()
{
    int i = 1, n;
    cin >> n;
    fun(i, n);
    return 0;
}