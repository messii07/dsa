#include<iostream>
#include<conio.h>
using namespace std;
int main()//adding
{
	int i,j,mat1[i][j],mat2[i][j],mat3[i][j];
	cout<<"Enter elements for matrix 1:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter elements for matrix 2:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat2[i][j];
		}
	}
	cout<<"Adding two matrix:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mat1[i][j]+mat2[i][j]<<" ";
		}
	}
	getch();
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()//multiplication
{
	int sum=0,i,j,k,mat1[3][3],mat2[3][3],mat3[3][3];
	cout<<"Enter elements for matrix 1:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter elements for matrix 2:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>mat2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				sum=sum+mat1[k][j]*mat2[j][k];
			}
			mat3[i][j]=sum;
		}
	}
	cout<<"Multiplication of matrices:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
}
#include<iostream>
#include<conio.h>
using namespace std;
int main()//transpose
{
	int arr[3][3],arrt[3][3],i,j;
	cout<<"enter elements for array:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arrt[i][j]=arr[j][i];
		}
	}
	cout<<"Transpose matrix is:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<arrt[i][j]<<" ";
			
		}
		cout<<"\n";
	}
	
	getch();
	
}
