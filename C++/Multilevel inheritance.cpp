#include<iostream>
using namespace std;
class grand
{
    public:
        int noh;
        int gdata()
        {
            cout<<"Enter no of house:";
            cin>>noh;
        }
};
class perent : public grand 
{
    public:
        int bal;
        int pdata()
        {
            cout<<"Enter total bank balance:";
            cin>>bal;
            return 0;
        }
};
class child :public perent
{
    public:
        int car;
        int cdata()
        {
            cout<<"Enter total no of car:";
            cin>>car;
        
        }
        int showdata()
        {
            cout<<"\nTotal no of house is:"<<noh;
            cout<<"\nTotal bank balnce is:"<<bal;
            cout<<"\nTotal no of car is:"<<car;
        }
};
int main()
{
    child c1;
    c1.gdata();
    c1.pdata();
    c1.cdata();
    c1.showdata();
}