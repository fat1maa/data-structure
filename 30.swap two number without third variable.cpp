#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	
	int a,b;
	cout<<"enter first numbers\t";
	cin>>a;
	cout<<"enter second number\t";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"numbers are "<<a<<" "<<b<<endl;
}
