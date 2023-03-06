#include<iostream>
using namespace std;
 int main()
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
