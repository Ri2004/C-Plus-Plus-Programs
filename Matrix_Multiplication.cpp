//Matrix Multiplication
#include<iostream>
using namespace std;
int main()
{
	int matrix1[200][300], matrix2[300][200], matrix3[300][200], i, j, k, row1, col1, row2, col2,sum;
	
	cout<<"Enter Row Size of 1st Matrix"<<endl;
	cin>>row1;
	
	cout<<"Enter Column Size of 1st Matrix"<<endl;
	cin>>col1;
	
	cout<<"Enter Row Size of 2nd Matrix"<<endl;
	cin>>row2;
	
	cout<<"Enter Column Size of 2nd Matrix"<<endl;
	cin>>col2;
	
	if(col1!=row2)
	{
		cout<<"Multiplication Not Possible";
	}
	else
	{
		cout<<"1st Matrix Elements are: "<<endl;
		for(i=0; i<row1; i++)
		{
			for(j=0; j<col1; j++)
			{
				cin>>matrix1[i][j];
			}
		}
		cout<<"2nd Matrix Elements are: "<<endl;
		for(i=0; i<row2; i++)
		{
			for(j=0; j<col2; j++)
			{
				cin>>matrix2[i][j];
			}
		}
		cout<<"1st Matrix is: "<<endl;
		for(i=0; i<row1; i++)
		{
			for(j=0; j<col1; j++)
			{
				cout<<matrix1[i][j];
				cout<<"\t";
			}
			cout<<endl;
		}
		cout<<"2nd Matrix is: "<<endl;
		for(i=0; i<row2; i++)
		{
			for(j=0; j<col2; j++)
			{
				cout<<matrix2[i][j];
				cout<<"\t";
			}
			cout<<endl;
		}
		cout<<"Multiplication Of Two Matrix is:"<<endl;
		for(i=0; i<row1; i++)
		{
			for(j=0; j<col2; j++)
			{
				sum = 0;	
				for(k=0; k<col1 && k<row2; k++)
				{
					sum = sum+(matrix1[i][k] * matrix2[k][j]);
				}
				matrix3[i][j] = sum;
				cout<<matrix3[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
}