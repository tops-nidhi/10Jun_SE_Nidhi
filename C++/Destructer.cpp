#include<iostream>
using namespace std;
class Destructer
{
public:
    Destructer()
    {
        cout<<"Constructer call";
    }
    ~Destructer()
    {
        cout<<"\nDestructer call";
    }
};
int main()
{
    Destructer d1;
}
