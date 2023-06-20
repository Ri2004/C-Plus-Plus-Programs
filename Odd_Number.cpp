// Odd Number
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number\n";
    cin >> a;
    cout << "\nOdd Numbers are\n";
    for (int i = 1; i <= a; i=i+2)
    {
        cout <<"\n"<< i;
    }
    return 0;
}