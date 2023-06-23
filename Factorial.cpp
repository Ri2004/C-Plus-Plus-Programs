// Factorial
#include<iostream>
using namespace std;
int main()
{
    int a,fact=1;
    cout<<"Enter a number: ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << a << " is: " << fact;

    return 0;
}