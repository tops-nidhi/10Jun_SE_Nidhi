#include<iostream>
using namespace std;
class Base
{
	public:
		virtual void data()
		{
			cout<<"This is function in base class.";	
		}		
};
class Derived : public Base
{
	public:
		void data()
		{
			cout<<"This is function in Derived class.";
		}
};
int main()
{
	Base *d1=new Base;
	d1->data();
}
