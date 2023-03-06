#include<iostream>
using namespace std;
int main()
{
int arr[6];
	int i,j,temp;
	int Max;
	cout<<"Enter the values of array : "<<endl;
			for(i=01;i<=5;i++)
			{
				cout<<"Enter value "<<i<<" : ";
				cin>>arr[i];
			}
			cout<<"The entered values are : "<<endl;
			for(i=1;i<=5;i++)
			{
				cout<<arr[i]<<"\t";
			}
			for(i=01;i<=5;i++)
			{
				for(j=i+1;j<=5;j++)
				{
					if(arr[i]<arr[j])
					{
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
					}
	
				}
			}
			Max=arr[1]-arr[5];
			cout<<"\nThe maximum difference is : "<<Max;		
}
