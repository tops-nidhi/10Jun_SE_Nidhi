#include<iostream>
using namespace std;
class Function_Overridding
{
    public:
        Overridding(int no) 
        {
            return no;
        }
};
class Function_Overridding2
{
    public:
        Overridding(int no) 
        {
            no++;
            return no;
        }
};  
int main()
{
    Function_Overridding obj;
    Function_Overridding2 obj2;
    cout<<endl<<obj.Overridding(20);
    cout<<endl<<obj2.Overridding(20);
}