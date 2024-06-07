#include <bits/stdc++.h>
using namespace std;

// function can be of type :- void,return,parameterised,non-parameterised
// void- does not return anything

/*void printname()   //1
 {
     cout << "Deepak Kumar";
 } */

void printName(string name) // 2
{
    cout << "HEllo " << name <<endl;
}

// int sum( int n1, int n2) below can also be written as this

int sum( int num1, int num2) {
    int num3 = num1 + num2 ;
    // cout<< num3;  //thus
    return num3 ;
}

int main()
{
    // string str;
    // str= "deepak";
    // cout<<str;
    // getline(cin,str);

    //string.size(); for size or string.length(); 
    // cin>>str;
    // cout<<str;
    // printname(); //1

    // string name;
    // cin >> name;
    // printName(name);

    // string name2;
    // cin >> name2;
    // printName(name2);

    int num1, num2;
    cin >> num1 >> num2;
    // sum(num1,num2);y
      //thus

    int result = sum(num1,num2);
    cout <<"sum is " << result << endl;

    // cout<<"sum is "<<sum (num1 , num2)<< endl;

    return 0;
}