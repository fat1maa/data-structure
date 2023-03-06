#include<iostream>
using namespace std;
int main()
{
	int n;int arm=0;int r;int c;
	cout<<"enter a number"<<endl;
	cin>>n;                       //n=153
	c=n;                          //c=153
	while(n>0)                    //true
	{
		r=n%10;                   //153%10=3
		arm=r*r*r+arm;            //27+0
		n=n/10;                   //153/10=15
	}
	if(c==arm)                
	cout<<"number is armstrong";
	else
	cout<<"not";
	
}
