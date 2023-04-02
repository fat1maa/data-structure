#include<iostream>
using namespace std;
int stack[100],n=100,top=-1;int temp;int empty;int arraypop[100];int counter=0; 
void push (int val)
{
	if(top>=n-1)
	cout<<"stack overflow "<<endl;
	else
	{
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top<=-1)
	cout<<"stack underflow "<<endl;
	else
	{   
	cout<<"the popped element is "<<stack[top]<<endl;
	top--;
    }
}
void display()
{
	if(top>=0)
	{
		cout<<"stack elements are ";
		for(int i=top;i>=0;i--)
		cout<<stack[i]<<endl;		
	}
	else 
	cout<<"stack is empty ";
}
bool isempty()
{
	if (top==-1)
     cout<<"empty"<<endl;
	else
	cout<<"not empty"<<endl;
	;
}
bool isfull()
{
	if(top==99)
     cout<<"full"<<endl;
	else 
	cout<<"not full"<<endl;
}
void even()
{
if(top>=0)
{
	cout<<"even elements "<<endl;
	for(int i=top;i>=0;i--)
	if(stack[i]%2==0)
	cout<<stack[i]<<endl;
}
}
void popel()
{
if(top>=0)
{
	for(int i=top;i>=0;i--)
	cout<<"no of popped elements are"<<stack[top]<<endl;
}
}
int main()
{
	int ch,val;
	cout<<"1)push in stack "<<endl;
	cout<<"2)pop in stack "<<endl;
	cout<<"3)display in stack "<<endl;
	cout<<"4)empty or not"<<endl;
	cout<<"5)full or not"<<endl;
	cout<<"6)even or odd"<<endl;
	cout<<"7)void showpopped"<<endl;
	cout<<"8)exit "<<endl;
	do
	{
		cout<<"enter choice "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					cout<<"enter value to be pushed "<<endl;
					cin>>val;
					push(val);
					break;
				}
		case 2:
				{
				    pop();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4:
				{
				   isempty();
					break;
				}
				case 5:
				{
				   isfull();
					break;
				}
				case 6:
				{
				  even();
					break;
				case 7:
				{	popel();
				    break;
				}
				case 8:
					{
					 cout<<"exit"<<endl;
					break;
					}
				
				default:
					{
						cout<<"invalid"<<endl;
					}				
	}
}
}
while(ch!=4);
}



