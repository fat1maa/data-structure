#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
  int a; 
  int temp=0;                // 7/1=0 && 7/7=0 any number divided by one or itself is prime
  cout<<"enter a number"<<endl;
  cin>>a;
 for(int i=1;i<=a;i++)
 {
 	if(a%i==0)
{
 	temp++;  
}     
 }
 if(temp==2)
 {
 cout<<"num is prime ";
}
 else
 {
 cout<<"num is not prime";
}
}
