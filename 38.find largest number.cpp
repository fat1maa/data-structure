#include<iostream>
using namespace std;
 int main()
 {
 	int a , b , c;
 	cout<<"enter numbers"<<endl;
 	cin>>a>>b>>c;
 	if(a>b)         //14>12
 	{
 		if(a>c)    //14>>11
 		cout<<"largest number is "<<a<<endl;   //14
 		else
 		cout<<"largest number is "<<c<<endl;    //11
	 }
	 else
	 if(b>a)
	 cout<<"largest number is "<<b<<endl;
	 else 
	 cout<<"largest number is "<<c<<endl;
}
