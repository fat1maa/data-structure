#include<iostream>
using namespace std;
 int main()
 {
 	int arr[5];int a;
 	for(a=1;a<=5;a++)
 	{
 		cout<<"enter value";   
 		cin>>arr[a];               //getting values from user
 	}
 	for(a=1;a<=5;a++)
    cout<<arr[a]<<endl;            //showing value	
    cout<<"reverse order"<<endl;
 	for(a=5;a>=1;a--)
{
	
    cout<<arr[a]<<endl;
}
 }
    
