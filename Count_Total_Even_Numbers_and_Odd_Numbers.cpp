//Count Total Even Numbers and Odd Numbers
#include<iostream>
using namespace std;
int main()
{
	int num[200],i,j,k, even=0, odd=0,n;
	
	cout<<"Enter The Size of Array"<<endl;
	cin>>n;
	
	cout<<"The Array Elements Are:"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>num[i];
	}
	
	for(j=0; j<n; j++)
	{
		if(num[j]%2==0)
			even++;
	}
	for(k=0; k<n; k++)
	{
		if(num[k]%2==0)
			odd++;
	}
	cout<<"Total Even Numbers are: "<<even<<endl;
	cout<<"Total Odd Numbers are: "<<odd<<endl;
}