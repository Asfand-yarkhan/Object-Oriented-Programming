#include<iostream>
using namespace std;
class Travel
{
	int km,hr;
	public:
	   Travel()
	   {
	   	km = 0;
	   	hr = 0;
	   }
	   void get_data();
	   void show();
	   int sum(Travel p)
	   {
	   	Travel t;
	   	t.km = km + p.km;
	   	t.hr = hr + p.hr;
	   	cout<<"\nTotal kilometers travelled = "<<t.km<<endl<<"Total hours travelled = "<<t.hr<<endl;
	   }
};
void Travel :: get_data ()
{
	cout<<"Enter kilometers Travelled :\n";
	cin>>km;
	cout<<"Enter the hours travelled : \n";
	cin>>hr;
}
void Travel :: show ()
{
	cout<<"You travelled "<<km<<"km "<<" in "<<hr<<" hours."<<endl;
}
int main()
{
	Travel t1,t2;
	t1.get_data();
	t1.show();
	t2.get_data();
	t2.show();
	t1.sum(t2);	
	return 0;
}
