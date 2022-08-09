#include<iostream>
using namespace std;
class construct
{
    public:
        int no;
        construct()
        {
            cout<<"Enter no:";
            cin>>no;
        }
        int showdata()
        {
            cout<<"No is:"<<no;
        }
};
int main()
{
    construct c1;
    c1.showdata();
}
