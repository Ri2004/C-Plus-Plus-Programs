#include<iostream>
using namespace std;

int sumOfDigits(int n, int k)
{
    if(n == 0)
        return k;
    
    return sumOfDigits(n/10, n%10 + k);
}

int main()
{
    cout<<sumOfDigits(253, 0); 
    return 0;
}