#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	int tday;
	cout<<"enter tdays"<<endl;
	cin>>tday;
	int year=tday/365;
	int month=(tday/365)/30;
	int days=(tday%365)%30;
	cout<<"year\t"<<year<<endl;
	cout<<"month\t"<<month<<endl;
	cout<<"days\t"<<days<<endl;
}
