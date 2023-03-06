#include<iostream>
using namespace std;
int main()
{
	int a[5];int temp;
	cout<<"enter elements"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<"elements are"<<endl;
		cin>>a[i];
	}
	for(int i=0;i<=5;i++)
	{
		for(int j=i+1;j<=5;j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"order is"<<endl;
	for(int i=0;i<=5;i++)
	{
		cout<<a[i];
	}
}
