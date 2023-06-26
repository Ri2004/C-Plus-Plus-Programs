//Matrix Addition
#include<iostream>
using namespace std;
int main()
{
	int matrix1[200][200], matrix2[200][200], matrix3[200][200], row1, col1, row2, col2, i, j;
	
	cout<<"Enter The Row Number of 1st Matrix"<<endl;
	cin>>row1;
	
	cout<<"Enter The Column Number of 1st Matrix"<<endl;
	cin>>col1;
	
	cout<<"Enter The Row Number of 2nd Matrix"<<endl;
	cin>>row2;
	
	cout<<"Enter The Column Number of 2nd Matrix"<<endl;
	cin>>col2;
	
	cout<<"The 1st Matrix Elements are:"<<endl;
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			cin>>matrix1[i][j];
		}
	}
	cout<<"The 2nd Matrix Elements are:"<<endl;
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			cin>>matrix2[i][j];
		}
	}
	
	cout<<"The 1st Matrix is:"<<endl;
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"The 2nd Matrix is:"<<endl;
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	if((row1!= row2) || (col1!=col2))
	{
		cout<<"Addition is Not Possible";
	}
	else
	{
		cout<<"Sum of 1st and 2nd Matrix is:"<<endl;
		for(i=0; i<row1 && i<row2; i++)
		{
			for(j=0; j<col1 && j<col2; j++)
			{
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
				cout<<matrix3[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
}