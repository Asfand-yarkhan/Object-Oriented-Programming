#include<iostream>
using namespace std;

class asfand
{
	private:
		static int n;
		public:
	asfand()
	{
		n++;
	}
	void show()
	{
		cout<<"Object created "<<n<<endl;
	}
};
int asfand ::  n = 0;
int main()
{
	asfand a1,a2;
	a1.show();
	a2.show();
	asfand a3,a4;
	a3.show();
	a4.show();
	return 0;
}
