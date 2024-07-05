#include<iostream>
using namespace std;

int highestDigit(int n)
{
    int temp, max = 0;
    temp = n;

    while(temp)
    {
        if(max < temp%10)
            max = temp % 10;

        temp /= 10;
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;

    cout << "Highest Value Digit in " << n << " is: " << highestDigit(n) << endl;
    
    return 0;
}