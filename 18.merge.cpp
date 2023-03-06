#include<iostream>
using namespace std;
 int main()
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
 	
 }
