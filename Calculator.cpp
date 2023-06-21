// Calculator
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter First Number" << endl;
    cin >> a;

    cout << "Enter Second Number" << endl;
    cin >> b;

    cout << "Choice" << endl
         << "+ for Addition" << endl
         << "- for Subtraction" << endl
         << "* for Multiplication" << endl
         << "/ for Division" <<endl
         << "% for Modulus"<<endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "The Sum of " << a << " and " << b << " is: " << a + b;
        break;
    case '-':
        cout << "The Subtraction of " << a << " and " << b << " is: " << a - b;
        break;
    
    case '*':
        cout << "The Multiplication of " << a << " and " << b << " is: " << a * b;
        break;
    case '/':
        cout << "The Division of " << a << " and " << b << " is: " << a / b;
        break;
    case '%':
        cout << "The Modulus of " << a << " and " << b << " is: " << a % b;
        break;
    default:
        cout << "InvaLid Input!";
    }
    return 0;
}