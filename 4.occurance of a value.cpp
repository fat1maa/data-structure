#include<Iostream>
using namespace std;
int main()
{
	int arr[10];
	int i;
	int value;
	int count=0;
	for(i=1;i<=5;i++)
	{
	cout<<"enter value in element";
	cin>>arr[i];
    }
   cout<<"enter value to be searched";
   cin>>value;	
   for(i=1;i<=5;i++)

   {
   	if(value==arr[i])
	count++;
   }
   cout<<"appeared= "<<count<<endl;
}

