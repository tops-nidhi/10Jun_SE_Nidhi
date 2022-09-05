#include<iostream>
using namespace std;
// template <typename t>
class Template
{
    public:
    int a;
    int b;
        int add (int a, int b)
        {   
            return a+b;
        }
        Template()
        {
            a=10;
            b=20;
            cout<<"This is oparater overloading"<<endl;
            // return 1;
        }
       int print()
        {
            cout<<a<<endl<<b;
            return 0;
            
        }
        Template operator++()
        {
            ++a;
            b++;
            return Template();
        }
};
int main()
{
    Template t1;
    cout<<t1.add(12,76);
    ++t1;
    t1.print();
}