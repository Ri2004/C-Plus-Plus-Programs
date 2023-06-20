// Even Number
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number\n";
    cin >> a;
    cout << "\nEven Numbers are\n";
    for (int i = 2; i <= a; i=i+2)
    {
        cout <<"\n"<< i;
    }
    return 0;
}