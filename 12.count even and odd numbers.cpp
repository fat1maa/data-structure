#include<iostream>
using namespace std;
int main()
{
int a[10];
int i;
int counte=0;
int counto=0;
cout<<"enter number";
for(i=1;i<=10;i++)
{
	cin>>a[i];
	{
		if (a[i]%2==0)
		counte++;
		else
		counto++;
	}
	
}
cout<<"even are"<<counte<<endl;
cout<<"odd are"<<counto<<endl;
}

