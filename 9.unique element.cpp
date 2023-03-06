#include<iostream>
using namespace std;
 int main()
 {
 	int a[5];int i,j, count=0;
 	cout<<"enter numbers";
 	cin>>a[i];
 	for(int i=1;i<5;i++)
 	{
 		cout<<"enter number";
 		cin>>a[i];
	 }
	 	for(int i=1;i<5;i++)
	 	{
	 	     	count=0;
	 			for(int j=1;j<5;j++)
	 			{
	 			if(i!=j)               //i=j means they are pointing the same element
	 			{
	 				if(a[i]==a[j])      //means they hve same value
	 				count++;
				 }
	}
          	if (count==0)              //they value is found thats why counter become  zero
	{
	    	cout<<a[i];
	}
}
}
		 
