#include<iostream>
using namespace std;
class data
{
    int no;
    public:
    int getdata()
    {
        cout<<"Enter no:";
        cin>>no;
        return 0;
    }
    int printdata()
    {
        cout<<"No is:"<<no;
        return 0;
    }
};
int main()
{
    data d1;
    d1.getdata();
    d1.printdata();

}
