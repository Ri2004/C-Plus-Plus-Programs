// Power OF Number
#include<iostream>
using namespace std;
int main()
{
    int a, b, result = 1;
    cout << "Enter Base Number" << endl;
    cin >> a;

    cout << "Enter Power Number" << endl;
    cin >> b;

    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    cout << "The result of " << a << " to the power " << b << " is: " << result;
    return 0;
}