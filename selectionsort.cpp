#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,arr[i],temp,size;
	cout<<"Enter size";
	cin>>size;
	cout<<"Enter elements";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"selection sort";
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
		
	}
}
