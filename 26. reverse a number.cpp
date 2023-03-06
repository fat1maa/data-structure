#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	int a;
	int remainder;
	cout<<"enter a number\t";
	cin>>a;
	while(a>0)              //234>0 
	{
	remainder=a%10;         //234%10=4
	cout<<remainder;        // remainder=4
	a=a/10;	                //234/10
	}
}
