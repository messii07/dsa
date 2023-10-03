#include<iostream>
#include<conio.h>
using namespace std;
int main()//search
{
	int arr[50],i,size,num,pos,c=0;
	cout<<"Enter array size:";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter array to be searched:";
	cin>>num;
	for(i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c=0)
	{
		cout<<"not found!";
	}
	else
	{
		cout<<"Number "<<num<<"found at"<<pos<<"position";
	}
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()//reverse
{
	int arr[50],i,size,j,temp;
	cout<<"Enter array size:";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"Now reverse array is:";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	getch();
}

#include<iostream>
#include<conio.h>
using namespace std;
int main()//sort
{
	int arr[50],i,size,j,temp;
	cout<<"Enter array size:";
	cin>>size;
	cout<<"Enter array elements:";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Data before sorting:";
	for(j=0;j<size;j++)
	{
		cout<<arr[j];
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(arr[j]<arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
		
	}
	cout<<"Data after sorting:";
	for(j=0;j<size;j++)
	{
		cout<<arr[j]<<" ";
	}
}
