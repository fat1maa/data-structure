#include<iostream>
using namespace std;
int main()
{       int a[5];
        int b[5];  
     cout<<"enter elements in array 1"<<endl;
    for(int i=0;i<5;i++)
    {
    	cin>>a[i];
	}
    cout<<"enter elements in array 2"<<endl;
    for(int i=0;i<5;i++)
    {
    	cin>>b[i];
	}
	 	for(int i=0;i<5;i++)
	 	
	     	
	     	{
			    if(a[i]==b[i])
				cout<<"\nArrays are same"; 
		       else
				cout<<"\nArrays are different";
			}
		
}
