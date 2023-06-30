//Sum_of_two_Prime_Numbers
#include<iostream>
using namespace std;

int check_prime(int n);
int main()
{
	int i,n;
	bool flag = false;
	
	cout<<"Enter A Positive Integer: ";
	cin>>n;
	
	for(i=2; i<=n/2; i++)
	{
		if(check_prime(i))
			if(check_prime(n-i))
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
				flag = true;
			}
	}
	if(!flag)
		cout<<n<<" can't represent as sum of two prime numbers.";
}
int check_prime(int n)
{
	int i;
	bool is_prime = true;
	if (n==0 || n==1)
	{
		is_prime = false;
	}
	for(i=2; i<=n/2; i++)
	{
		if(n%i == 0)
		{
			is_prime = false;
			break;
		}
	}
	return is_prime;
}