#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	int input;
	cout<<"Enter selection from 11 to 19 : ";
	cout<<"\nEnter 1 to seperate even and odd numbers in array."<<endl;
	cout<<"Enter 2 to count even and odd integers in array."<<endl;
	cout<<"Enter 3 to sort an array in ascending order."<<endl;
	cout<<"Enter 4 to sort an array in descending order."<<endl;
	cout<<"Enter 5 to find second smallest number in array."<<endl;
	cout<<"Enter 6 to find second lergest number in array."<<endl;
	cout<<"Enter 7 to check if two arrays are same or not."<<endl;
	cout<<"Enter 8 to merge two unsorted arrays."<<endl;
	cout<<"Enter 9 to find maximum difference b/w two numbers."<<endl;
	cin>>input;
 switch ( input ) 
 {
case 1:
{
	int i;
	int size;
	int a[5];
	cout<<"enter elements of array"<<endl;
	for(i=1;i<=5;i++)
	{
		cout<<"enter values"<<endl;
		cin>>a[5];
	}
	cout<<"even number"<<endl;
	{
	for(i=0;i<=5;i++)
	{
		if (a[i]>=0);
		{
		if (a[i]%2==0)
		cout<<a[i];
	}
	}
}
cout<<"odd number"<<endl;
	{
	for(i=0;i<=5;i++)
	{
		if (a[i]>=0);
		{
		if (a[i]%2==1)
		cout<<a[i];
}
}
}
}
break;
case 2:
{
int a[10];
int i;
int counte=0;
int counto=0;
cout<<"enter number";
for(i=1;i<=10;i++)
{
	cin>>a[i];
	{
		if (a[i]%2==0)
		counte++;
		else
		counto++;
	}
	
}
cout<<"even are"<<counte<<endl;
cout<<"odd are"<<counto<<endl;
}
case 3:
{
	int a[5];int temp;
	cout<<"enter elements"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<"elements are"<<endl;
		cin>>a[i];
	}
	for(int i=0;i<=5;i++)
	{
		for(int j=i+1;j<=5;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"order is"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
}break;
case 4:
{
	int a[5];int temp;
	cout<<"enter elements"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<"elements are"<<endl;
		cin>>a[i];
	}
	for(int i=0;i<=5;i++)
	{
		for(int j=i+1;j<=5;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"order is"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
}break;
case 5:
{
        int arr[5];
        int i,j,num;
        cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : "<<endl;
				cin>>arr[i];                         //for input
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";                 //for output
			}
		
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
				
						num=arr[j];
						arr[j]=arr[i];
						arr[i]=num;
					}
	
				}
				cout<<"\nthe number is"<<endl;
				cout<<arr[1]<<"\t";
			}	
}break;
case 6:
{
        int arr[5];
        int i,j,num;
        cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : "<<endl;
				cin>>arr[i];                         //for input
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";                 //for output
			}
		
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
				
						num=arr[j];
						arr[j]=arr[i];
						arr[i]=num;
					}
	
				}
				cout<<"\nthe number is"<<endl;
				cout<<arr[1]<<"\t";
			}	
}break;
case 7:
{       int a[5];
        int b[5];  
     cout<<"enter elements in array 1"<<endl;
    for(int i=0;i<5;i++)
    {
    	cin>>a[i];
	}
    cout<<"enter elements in array 2"<<endl;
    for(int i=0;i<5;i++)
    {
    	cin>>b[i];
	}
	 	for(int i=0;i<5;i++)
	 	
	     	
	     	{
			    if(a[i]==b[i])
				cout<<"\nArrays are same"; 
		       else
				cout<<"\nArrays are different";
			}
		
}break;
case 8:
 {
 	int a[10];
 	int b[10];
 	int c[10];
 	cout<<"enter values"<<endl;
 	for(int i=0;i<5;i++)
 	{
 		cin>>a[i];
	 }
	cout<<"enter values"<<endl;
 	for(int i=0;i<5;i++)
 	{
 		cin>>b[i];
	 }
	 	for(int i=0;i<5;i++)
	 	{
	 		c[i]=a[i];
	 		c[i+5]=b[i];
		 }
		 	for(int i=0;i<10;i++)
		 	{
		 		cout<<c[i]<<"\t";
			 }
 	
 }break;
case 9:
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
}break;
case 10:
	cout<<"invalid input";
}
}

    
