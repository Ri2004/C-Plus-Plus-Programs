#include<iostream>
using namespace std;

bool isPrime(int n)
{
    int i, prime = 1;
    for (i = 2; i * i <= n; i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }

    if(prime)
        return true;
    else
        return false;
}


int findNextPrime(int n)
{
    while(!isPrime(++n));
    
    return n;
}

int main()
{
    int n;
    cout << "Enter a Number " << endl;
    cin >> n;

    cout << "The Next Prime Number of " << n << " is: " << findNextPrime(n) << endl;

    return 0;
}