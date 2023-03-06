#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	int n;
	cout<<"enter a year: ";
	cin>>n;
	if(n%400==0)
	cout<<"leap year";
	else 
	cout<<"not a leap year";
}
