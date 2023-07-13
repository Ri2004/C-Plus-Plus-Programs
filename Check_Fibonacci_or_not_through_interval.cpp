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
    int lower, upper,i;
    cout << "Enter Lower Limit:" << endl;
    cin >> lower;

    cout << "Enter Upper Limit:" << endl;
    cin >> upper;

    for (i = lower; i <= upper; i++)
    {
        if (check_fibo(i) == true)
        {
            cout << i << " is a Fibonacci Number"<<endl;
        }
        else
        {
            cout << i << " is not a Fibonacci Number"<<endl;
        }
    }
    return 0;
}