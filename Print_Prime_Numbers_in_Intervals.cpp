//Print Series of Prime Numbers
#include<iostream>
using namespace std;

bool isprime(int n)
{
	if(n==0 || n==1)
		return false;
		
	for(int i=2; i<n; i++)
	{
		if(n%i == 0)
		{
			return false;
			break;
		}
		return true;
	}
}
int main()
{
	int n1,n2,i;
	 
	cout<<"Enter Low Limit"<<endl;
	cin>>n1;
	
	cout<<"Enter High Limit"<<endl;
	cin>>n2;
	
	cout<<"Prime Numbers Between "<<n1<<" and "<<n2<<" are: ";
	for(i=n1; i<=n2; i++)
	{
		if (isprime(i))
		{
			cout<<i<<" ";
		}
	}
}