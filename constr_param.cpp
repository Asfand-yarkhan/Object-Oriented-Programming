#include<iostream>
using namespace std;
class student
{
	int marks;
	char grade;
	public:
		student(int m, char a)
		{
			marks = m ;
			grade = a ;
		}
		void show()
		{
			cout<<"MARKS = "<<marks<<endl;
			cout<<"GRADE = "<<grade<<endl;
		}
	
};
int main()
{
	
	int c,d;
	char e,f;
	cout<<"Record of Student 1: \n";
	cout<<"Enter the marks : \n";
	cin>>c;
	cout<<"ENTER THE GRADES: "<<endl;
	cin>>e;
	student s1(c,e);
	cout<<"Record of Student 2: \n";
	cout<<"Enter the marks : \n";
	cin>>d;
	cout<<"ENTER THE GRADES: "<<endl;
	cin>>f;
	student s2(d,f);
	cout<<"\n\n\n";
	cout<<"Record of Student 1: \n";
	s1.show();
	cout<<"Record of Student 2: \n";
	s2.show();
}
