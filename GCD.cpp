//GCD
#include<iostream>
using namespace std;
int main()
{
    int a, b, gcd;
    cout << "Enter A Number\n";
    cin >> a;
    cout << "Enter A Number\n";
    cin >> b;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
        }
    }
    cout << "The GCD of " << a << " and " << b << " is: " << gcd;
    return 0;
}