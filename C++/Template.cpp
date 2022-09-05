#include<iostream>
using namespace std;
template <typename t>
t add(t a,t b) 
{
    return a+b;
}
int main()
{
    cout<<add <int>(12,76);
    cout<<endl<<add <float>(1.2,7.6);
    cout<<endl<<add <int>('a','b');
}