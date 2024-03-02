#include<iostream>
using namespace std;

class car
{
	int year,id;
	string model;
public:
	/*default constructor
	car()
	{
		year=1992;
		id=1;
		model="CIVIC";
		cout<<"CAR ID = "<<id<<endl;
		cout<<"Year = "<<year<<endl;
		cout<<"Model = "<<model<<endl;
	
	*/
	
	//parametrized constructor
	car (int i, int y, string m)
	{
		year=y;
		id=i;
		model=m;
		cout<<"CAR ID = "<<id<<endl;
		cout<<"Year = "<<year<<endl;
		cout<<"Model = "<<model<<endl;
	}
	
};
int main()
{
	
	car c1(1,1992,"Honda");
	cout<<endl;
	car c2(2,1999, "TOYOTA");
	return 0;
}
