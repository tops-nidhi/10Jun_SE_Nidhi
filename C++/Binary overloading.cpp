#include<iostream>dc
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
        void Print()
        {
            cout<<"Value of no is:"<<no;
        }
        Poly operator+(Poly p)
        {
            no=no+p.no;
            return Poly(no);
        }
};
int main()
{
	int no1, no2;
	cout<<"Enter 2 no";
	cin>>no1>>no2;
    Poly obj1(no1),obj2(no2),obj3;
    obj3=obj1+obj2;
    obj3.Print();
}
