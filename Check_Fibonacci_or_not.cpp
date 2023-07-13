// Check Fibonacci Or not
#include<iostream>
#include<cmath>
using namespace std;
int is_perfect_square(int n)
{
    int s = sqrt(n);
    return s * s == n;
}
int check_fibo(int num)
{
    return ((is_perfect_square(5 * pow(num, 2) + 4)) || (is_perfect_square(5 * pow(num, 2) - 4)));
}
int main()
{
    int num;
    cout << "Enter A Number:" << endl;
    cin >> num;

    if (check_fibo(num) == true)
    {
        cout << num << " is a Fibonacci Number";
    }
    else
    {
        cout << num << " is not a Fibonacci Number";
    }
    return 0;
}