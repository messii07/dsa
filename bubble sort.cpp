#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,arr[i],temp,size;
	cout<<"Enter size";
	cin>>size;
	cout<<"Enter elements";
	for(i-0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<size;++i)
	{
	
	for(j=0;j<size-1;++j)
	{
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	}
}
	cout<<"Bubble sort array";
	for(j=0;j<size;j++)
	{
		cout<<arr[j];
	}
}
