// Calculate using all arithmetic operators
#include<iostream>
using namespace std;
int main()
{
    int a, b,sum=0, sub=0,mul=0,div=0,mod=0;
    cout << "Enter First Number\n";
    cin >> a;
    cout << "Enter Second Number\n";
    cin >> b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    mod = a % b;
    cout << "\nSum of "<<a<<" and "<<b<<" is "<<sum;
    cout << "\n\nSubtraction of "<<a<<" and "<<b<<" is "<<sub;
    cout << "\n\nMultiplication of "<<a<<" and "<<b<<" is "<<mul;
    cout << "\n\nDivision of "<<a<<" and "<<b<<" is "<<div;
    cout << "\n\nModulus of "<<a<<" and "<<b<<" is "<<mod;
    return 0;
}