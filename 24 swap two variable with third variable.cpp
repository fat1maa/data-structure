#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter first variable\t";
	cin>>a;
	cout<<"enter second variable\t";
	cin>>b;
	{
	a=a+b;
	b=a-b;
	a=a-b;
	}
	//after swapping
		cout<<"after swapping"<<endl;
		cout<<a<<endl;
		cout<<b<<endl;

}
