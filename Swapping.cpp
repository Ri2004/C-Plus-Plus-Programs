#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First Number\n";
    cin >> a;
    cout << "Enter Second Number\n";
    cin >> b;

    cout << "\nBefore Swapping a=" << a << " and b=" << b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter Swapping a=" << a << " and b=" << b;
    return 0;
}