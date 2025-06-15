#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << " a&b " << (a & b) << endl; // and
    cout << " a|b " << (a | b) << endl; // or
    cout << " ~a " << (~a) << endl;     // not
    cout << " a^b " << (a ^ b) << endl; // xor

    cout << (17 >> 1) << endl; // right shift me 17/2=8 for one shift
    cout << (17 >> 2) << endl; // for two shift 17/2 then ans/2
    cout << (19 << 1) << endl; // left shift me for one multiple by 2 once 19*2
    cout << (19 << 2) << endl;
}