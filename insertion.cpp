#include<iostream>
using namespace std;
int main()
{
int size,arr[50],i,j,temp;
cout<<"Enter array size: ";
cin>>size;
cout<<"Enter array elements: ";
for(i=0;i<size;i++)
{
cin>>arr[i];
}
cout<<"Sorting array using insertion sort!\n";
for(i=0;i<size;i++)
{
temp=arr[i];
j=i-1;
while((temp<arr[j])&&(j>=0))
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=temp;
}
cout<<"Now the array after sorting is: \n";
for(i=0;i<size;i++)
{
cout<<arr[i]<<" ";
}
return 0;
}

