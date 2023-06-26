//Sum Of two arrays and store them into a third array
#include<iostream>
using namespace std;
int main()
{
	int num1[200],num2[200],num3[200],i,n1,n2,n3;
	
	cout<<"Enter The Size of 1st Array"<<endl;
	cin>>n1;
	
	cout<<"Enter The Size of 2nd Array"<<endl;
	cin>>n2;
	
	if(n1 != n2) //if both size are different then compiler will give garbage values
	{
		cout<<"Addition Not Possible";
	}
	else
	{
		n3 = n1 = n2;
		cout<<"The 1st Array Elements Are:"<<endl;
		for(i=0; i<n1; i++)
		{
			cin>>num1[i];
		}
	
		cout<<"The 2nd Array Elements Are:"<<endl;
		for(i=0; i<n2; i++)
		{
			cin>>num2[i];
		}
	
		cout<<"After Addition of two array's: ";
		for(i=0; i<n3; i++)
		{
			num3[i] =  num1[i] + num2[i];
			cout<<num3[i]<<" ";
		}
	}
	
}