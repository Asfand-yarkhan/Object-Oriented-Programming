#include<iostream>
using namespace std;

class calculator
{
	private:
		int n1,n2;
	public:
	void get()
	{
		cout<<"ENTER THE NUMBER:\n";
		cin>>n1;
		cout<<"ENTER THE NUMBER:\n";
		cin>>n2;
	}
	int sum()
	{
		return n1+n2;
	}
	int sub()
	{
		return n1-n2;
	}
	int mul()
	{
		return n1*n2;
	}
	float div()
	{
		return n1/n2;
	}
	
};
int main()
{
	calculator c1;
	int ch;
	c1.get();
	cout<<"Enter 1 to sum:\n";
	cout<<"Enter 2 to sub:\n";
	cout<<"Enter 3 to mul:\n";
	cout<<"Enter 4 to div:\n";
	cout<<endl<<"Enter your choice: \n";
	cin>>ch;
	
	switch(ch)
	{
		case  1:
			c1.sum();
			cout<<" sum = "<<c1.sum()<<endl;
			break;
			
		case 2:
			c1.sub();
			cout<<"Subtraction = "<<c1.sub()<<endl;
			break;
			case 3:
			c1.mul();
			cout<<"mul = "<<c1.mul()<<endl;
			break;
			case 4:
			c1.div();
			cout<<"div = "<<c1.div()<<endl;
			break;
			default:
				cout<<"wrong choice! try again"<<endl;
	}
	
	return 0;
}
