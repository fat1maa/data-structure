#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
char str[30];
int i=0;
cout<<"enter a uppecase string"<<endl;
cin>>str;
while(str[i]!='\0')
{
	str[i]=str[i]+32;
	i++;
}
cout<<"string is "<<str<<endl;
}
