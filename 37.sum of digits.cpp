#include<iostream>
using namespace std;
 int main()
 {
 	int n;int last;int sum=0;int first;
 	cout<<"enter a number"<<endl;
 	cin>>n;
 	{
 	last=n%10;    
 	first=n;
   while(first>=10)
   first=first/10;
   {
   	sum=first+last;
   }
   cout<<"sum is "<<sum;
}
}
