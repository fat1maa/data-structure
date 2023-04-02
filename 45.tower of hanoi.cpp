#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void toh(int n,char,char,char);
int main()
{
	int n;
	char a,b,c;
	cout<<"enter no of disk"<<endl;
	cin>>n;
	toh(n,'a', 'b', 'c');
}
void toh(int n,char beg,char aux,char end)
{
if (n>=1)
{
	toh(n-1,beg,end,aux);
cout << "Move disk " << n << " from rod " << beg << " to rod " << end << endl;
	toh(n-1,aux,beg,end);
}
}
		

