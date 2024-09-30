#include<iostream>
using namespace std;
class A{
public:
	int q[100];
	int front=0,rear=-1,l=0;
	int r[100];
	void push(int x)
	{
		if(rear==l-1)
		{
			cout<<"overflow";
		}
		else
		{
			q[++rear]=x;
		}
	}
	int pop()
	{
		if(front>rear)
		{
			cout<<"underflow";
		}
		else
		{
			return q[front++];
		}
	}
	void reverse()
	{
			for(int i=rear;i>=front;i--)
		{
			r[i]=q[l-i];
		}
	for(int i=rear;i>=front;i--)
		{
			if(r[i]!=0)
			cout<<r[i];
		}	
	}
	void display()
	{
		if(front>rear)
		{
			cout<<"empty";
		}
		else
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<q[i];
			}
		}
	}
}ob;
	int main()
	{
		int n;
		cout<<"enter size of queue";
		cin>>n;
		ob.l=n;
		int c=0;
		while(c!=4)
		{
			cout<<"1.push \n 2.pop \n 3.display \n 5.exit \n 4.reverse \n"<<"ghfh";
			cout<<"enter your choice";
			cin>>c;
			switch(c)
			{
				case 1:cout<<"enter the value you want to enter";
				 	   int v;
				 	   cin>>v;
				 	   ob.push(v);
				 	   break;
				case 2:ob.pop();
				  	   break;
				case 3:ob.display();
				       break;
			    case 4:cout<<"exit";
			    case 5:ob.reverse();
			    		break;
				default:cout<<"wrong input";  		
			}
		}
	return 0;	
	}
