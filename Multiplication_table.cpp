// Multiplication_table
#include<iostream>
using namespace std;
int main()
{
    int a,n;
    cout << "Enter A Number" << endl;
    cin >> a;

    cout << "Enter the limit of Multiplication table" << endl; /*This line means if user enters multiplication table of 6 and limit is  20 then multiplication table will show 6*1 =6 upto 6*20 =120*/ 
    cin >> n;

    cout << "Multiplication Table of " << a << endl;
    for (int i = 1; i <= n; i++)
    {
        cout <<"\n"<< a << " * " << i << " = " << a * i;
    }
    return 0;
}