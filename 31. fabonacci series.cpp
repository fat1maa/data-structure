#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	// 0 1 1 2 3 5 8 .....n
	int n;int a=0;int b=1;
	cout<<"enter a number"<<endl;
	cin>>n;                        //n=5
	for(int i=1;i<=n;i++)          // i=1 1<=5 i=1
	{
		cout<<a;                    //a=0
		int c=a+b;
		a=b;
		b=c;
	}
}
	
