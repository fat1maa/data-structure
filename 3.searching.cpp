#include<iostream>
using namespace std;
 int main()
 {
 	int arr[5]={60,20,30,40,50};
 	int b;                                       
 	int location=0;                               
 	cout<<"enter a number for search"<<endl;
 	cin>>b;
    for(int a=0;a<=9;a++)
    {
    	if(arr[a]==b)
    	{
    	location=a; 
    	cout<<"value found at "<<location+1;     
		}        
                                                 
		 if(location==10)     
		 cout<<"value not found"<<endl;
	}
}
		

