// Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,temp, rem, digit=0, length=0;
    
    cout << "Enter A Number:" << endl;
    cin >> n;
    temp = n;

    while(temp>0)
    {
        length++;
        temp /= 10;
    }
    
    temp = n;
    while (temp>0)
    {
        rem = temp % 10;
        digit = digit + pow(rem,length);
        temp = temp / 10;
    }
    if(n == digit)
    {
        cout << n << " is an Armstrong Number";
    }
    else
    {
        cout << n << " is an Armstrong Number";
    }

    return 0;
}