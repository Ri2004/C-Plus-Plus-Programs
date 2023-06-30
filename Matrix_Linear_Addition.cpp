//Matrix linear equation
#include<iostream>
using namespace std;
int main()
{
	int matrix[200][200], sum_of_cols, sum_of_rows, i,j,row,col;
	
	cout<<"Enter Row Number Of Matrix"<<endl;
	cin>>row;
	
	cout<<"Enter Column Number Of Matrix"<<endl;
	cin>>col;
	
	cout<<"Enter Matrix Elements"<<endl;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cin>>matrix[i][j];
		}
	}
	
	cout<<"The Matrix is:"<<endl;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<matrix[i][j];
			cout<<"\t";
		}
		cout<<endl;
	}
	
	for(i=0; i<row; i++)
	{
		sum_of_cols = 0;
		sum_of_rows = 0;
		
		for(j=0; j<col; j++)
		{
			sum_of_rows = sum_of_rows + matrix[i][j];
			sum_of_cols = sum_of_cols + matrix[j][i];
		}
		cout<<"Sum Of Rows: "<<sum_of_rows<<endl<<endl;
		cout<<"Sum Of Columns: "<<sum_of_cols<<endl<<endl;
	}
}