#include<iostream>
using namespace std;
 int main()
 {
 	int arr[10];
 	for(int a=0;a<=4;a++)
 	{
 		cout<<"enter values";
 		cin>>arr[a];
	}
         int minimum=arr[0];      //we considered first as maximum and then compare it with all the values....if the value of index is greater then we will update max;
      for(int a=0;a<=4;a++)
    {
    	if(minimum>arr[a])      //arr a = 10,20,30,40,50
    	{
    		minimum=arr[a];
		}
	}
	cout<<"manimum value is "<<minimum;
}

