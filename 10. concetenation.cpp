#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
	 int main()
 {
	int input;
	cout<<"Enter selection from 1 to 9 : ";
	cout<<"\nEnter 1 to show minimum value."<<endl;
	cout<<"Enter 2 to show maximum number."<<endl;
	cout<<"Enter 3 for searching number."<<endl;
	cout<<"Enter 4 for check the occurance of number."<<endl;
	cout<<"Enter 5 to print only odd numbrs."<<endl;
	cout<<"Enter 6 to ptint only even number in array."<<endl;
	cout<<"Enter 7 to find sum."<<endl;
	cout<<"Enter 8 to reverse an arrays."<<endl;
	cout<<"Enter 9 to find all unique elements."<<endl;
	cin>>input;
 switch ( input ) 
 {
 case 1:
{
 	int arr[10];
 	for(int a=0;a<=4;a++)
 	{
 		cout<<"enter values";
 		cin>>arr[a];
	}
         int minimum=arr[0];      //we considered first as maximum and then compare it with all the values....if the value of index is greater then we will update max;
      for(int a=0;a<=4;a++)
    {
    	if(minimum>arr[a])      //arr a = 10,20,30,40,50
    	{
    		minimum=arr[a];
		}
	}
	cout<<"manimum value is "<<minimum;
}
break;
case 2:
{
 { 
 int a[5];
 for(int j=0;j<=5;j++)
 {
 	cout<<"enter values"<<endl;
 	cin>>a[j];
 	
 }
 cout<<"values are";
 for (int j=0;j<=5;j++)
 {
 	cout<<a[j];
 }
 int max=a[0];
 {
 for(int j=0;j<=5;j++)
 {
 	if (max<a[j])
cout<<"maximum is"<<max;
}
}
}
}break;
 case 3:
  {
 	int arr[5]={60,20,30,40,50};
 	int b;                                       
 	int location=10;                               
 	cout<<"enter a number for search"<<endl;
 	cin>>b;
    for(int a=0;a<=9;a++)
    {
    	if(arr[a]==b)
    	{
    	location=a; 
    	cout<<"value found at "<<location+1;     
		}        
                                                 
		 if(location==10)     
		 cout<<"value not found"<<endl;
	}
}break;
case 4:
{
	int arr[10];
	int i;
	int value;
	int count=0;
	for(i=1;i<=5;i++)
	{
	cout<<"enter value in element";
	cin>>arr[i];
    }
   cout<<"enter value to be searched";
   cin>>value;	
   for(i=1;i<=5;i++)

   {
   	if(value==arr[i])
	count++;
   }
   cout<<"appeared= "<<count<<endl;
}break;
case 5:
{
 	int a[10];
 	int i;
 	for(i=1;i<=5;i++)
 	{
 		cout<<"enter values";
 		cin>>a[i];
	 }
	 for(i=1;i<=5;i++)
	 
	{
		if(a[i]%2==1)
		cout<<a[i]<<endl;
	}
 }break;
case 6:
 {
 	int a[10];
 	int i;
 	for(i=1;i<=5;i++)
 	{
 		cout<<"enter values";
 		cin>>a[i];
	 }
	 for(i=1;i<=5;i++)
	 
	{
		if(a[i]%2==0)
		cout<<a[i]<<endl;
	}
 }
 case 7:
  {
 	int a[5];
 	int sum=0;
 	int i;
 	for(i=1;i<=5;i++)
 	{
 		cout<<"enter values ";
 		cin>>a[i];
	 }
	 for(i=01;i<=5;i++)
	 {
	 	sum=sum+a[i];
	 }
	 cout<<"sum is "<<sum<<endl;
}break;
case 8:
{
 	int arr[5];int a;
 	for(a=1;a<=5;a++)
 	{
 		cout<<"enter value";   
 		cin>>arr[a];               //getting values from user
 	}
 	for(a=1;a<=5;a++)
    cout<<arr[a]<<endl;            //showing value	
    cout<<"reverse order"<<endl;
 	for(a=5;a>=1;a--)
{
	
    cout<<arr[a]<<endl;
}
 }
  case 9:
 {
 	int a[5];int i,j, count=0;
 	cout<<"enter numbers";
 	cin>>a[i];
 	for(int i=1;i<5;i++)
 	{
 		cout<<"enter number";
 		cin>>a[i];
	 }
	 	for(int i=1;i<5;i++)
	 	{
	 	     	count=0;
	 			for(int j=1;j<5;j++)
	 			{
	 			if(i!=j)               //i=j means they are pointing the same element
	 			{
	 				if(a[i]==a[j])      //means they hve same value
	 				count++;
				 }
	}
          	if (count==0)              //they value is found thats why counter become  zero
	{
	    	cout<<a[i];
	}
}
} break;
case 10:
cout<<"invalid input";
}
}

