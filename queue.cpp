#include<iostream>
using namespace std;
class A{
public:
	int q[100];
	int max_size;
	int front,rear;
	void push(int x)
	{
		if(rear==max_size-1)
		{
			cout<<"overflow";
		}
		else
		{
			q[++rear]=x;
		}
	}
	void pop()
	{
		if(front>rear)
		{
			cout<<"underflow";
		}
		else
		{
			cout<<"deleted value is"<<q[front++];
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
		cout<<"enter the size of queue\n";
		cin>>ob.max_size;
		ob.front=0; ob.rear=-1;
		int c;
		while(c!=4)
		{
			cout<<"1.push \n 2.pop \n 3.display \n 4.exit \n";
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
				default:cout<<"wrong input";  		
			}
		}
	return 0;	
	}
