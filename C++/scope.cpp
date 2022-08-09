#include<iostream>
using namespace std;
int c=90;

int main()
{
    int a=10,b=20;
    int c=a+b;
    cout<<"Loacal variable c:"<<c;
    cout<<endl<<"Gloabal variable c:"<<::c;
}
