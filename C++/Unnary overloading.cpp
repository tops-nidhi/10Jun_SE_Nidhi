#include<iostream>
using namespace std;
class Poly
{
    public:
        int no;
        Poly()
        {
            no=0;
        }
        Poly(int n)
        {
            no=n;
        }
        void print()
        {
            cout<<"Value of no is:"<<no;
        }
        Poly operator ++()
        {
            ++no;
            return Poly(no);
        }
};
int main()
{
    Poly py1(23);
    py1.print();
    ++py1;
    cout<<endl<<"After unnary operator";
    py1.print();
}
