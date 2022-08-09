#include<iostream>
using namespace std;
class Base
{
    public:
        int printdata()
        {
            cout<<"This the base class.";
            cout<<endl;
        }
};
class Derived : public Base
{
    public:
        int showdata()
        {
            cout<<"This the derived class";
   			
        }
};
int main()
{
    Derived d1;
    d1.printdata();
    d1.showdata();
}
