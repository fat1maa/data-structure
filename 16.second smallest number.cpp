#include<iostream>
using namespace std;
int main()
{
        int arr[5];
        int i,j,num;
        cout<<"Enter the values of array : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value "<<i+1<<" : "<<endl;
				cin>>arr[i];                         //for input
			}
			cout<<"The entered values are : "<<endl;
			for(i=0;i<5;i++)
			{
				cout<<arr[i]<<"\t";                 //for output
			}
		
			{
				for(j=i+1;j<5;j++)
				{
					if(arr[i]>arr[j])
					{
				
						num=arr[j];
						arr[j]=arr[i];
						arr[i]=num;
					}
	
				}
				cout<<"\nthe number is"<<endl;
				cout<<arr[1]<<"\t";
			}	
}
