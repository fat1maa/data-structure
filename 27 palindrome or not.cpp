#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
	int n;     //n=121
	int c;     
	int r;
	int s=0;
	cout<<"enter a number";
	cin>>n;                  //palindrome number 121 -->121 after reverse it will same
	c=n;     //c=121
	while(n>0) //121>0        //12>0
	{
	r=n%10;    //121/10=1     //12/10=2
	s=r+(s*10); //1+0*10=1    //2+1*10=12
	n=n/10;     //121/10=12   //12/10=1
	}
	if(c==s)   
	cout<<"palindrome";
	else 
	cout<<"not";
}
