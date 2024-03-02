#include<iostream>
using namespace std;

class student
{
	//private access modifiers
	int n1,n2,n3,s;
	float avg;
	public:
		void in ()
		{
			cout<<"ENTER THE MARKS OF BIOLOGY:\n";
			cin>>n1;
			cout<<"ENTER THE MARKS OF CHEMISTRY:\n";
			cin>>n2;
			cout<<"ENTER THE MARKS OF PHYSICS:\n";
			cin>>n3;
		}
		void sum()
		{
			s=n1+n2+n3;
			cout<<"SUM OF MARKS = "<<s<<endl;
		}
		void average()
		{
			avg=s/3.0f;
			cout<<"Average is = "<<avg<<endl;
		}
		
};
int main()
{
	student s1;
	s1.in();
	s1.sum();
	s1.average();
	return 0;
}

