#include<iostream>
#include<conio.h>
using namespace std;
int main()//merge
{
	int arr1[50],arr2[50],merge[100],size1,size2,size,i,j,k;
	cout<<"Enter array 1 size:";
	cin>>size1;
	cout<<"Enter array 1 elements:";
	for(i=0;i<size1;i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter array 2 size:";
	cin>>size2;
	cout<<"Enter array 2 elements:";
	for(i=0;i<size2;i++)
	{
		cin>>arr2[i];
	}
	for(i=0;i<size1;i++)
	{
		merge[i]=arr1[i];
	}
	size=size1+size2;
	for(i=0,k=size1;k<size && i<=size2;i++,k++)
	{
		merge[k]=arr2[i];
	}
	cout<<"Now merged array is:";
	for(i=0;i<size;i++)
	{
		cout<<merge[i]<<" ";
	}
	getch();
}
