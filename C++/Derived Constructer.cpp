#include<iostream>
using namespace std;
class Base
{
    public:
        Base(int no)
        {

        }
};
class Derived : public Base
{
    public:
        Derived(int no) : Base(no)
        {
//            cout<<"This is Derived constructer in base class.";
            cout<<"Value of no is:"<<no;
        }
};
int main()
{
	int no;
	cout<<"Enter value of no:";
	cin>>no;
    Derived b1(no);
}