#include<iostream>
using namespace std;
class a
{
	public:
		virtual void fun()
		{
			cout<<"hello";
		}
};
class b: public a
{
	public:
		void fun()
		{
			cout<<"world";
		}
};

int main()
{
	b obj;
	a *ptr;
	ptr=&obj;
	ptr->fun(); 
}
