#include<iostream>
using namespace std;
class Overloading
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        float add(float a, float b)
        {
            return a+b;
        }
};
int main()
{
    Overloading obj;
    Overloading obj2;
    cout<<obj.add(2,4)<<endl;
    cout<<obj2.add(2.3f,4.5f);
}
