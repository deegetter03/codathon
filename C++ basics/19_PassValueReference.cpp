#include <bits/stdc++.h>
using namespace std;

// //Pass by value
void doSomething(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// Pass by reference using & to get address

// void doSomething(int &num){
//     cout << num <<endl;
//     num+=5;
//     cout << num <<endl;
//     num+=5;
//     cout << num <<endl;
// }

int main()
{
    int num = 10;
    doSomething(num); // passing the address of variable to function, not passing its actual data.
    cout << num << endl;
    return 0;
}