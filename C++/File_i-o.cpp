#include<iostream>
#include<fstream>
using namespace std;
/*
fstream - read, write;
ifstream - read;
ofstraem - write;
*/
int main()
{
    string str;
    ofstream out ("D:/Nidhi batch/10june_SE/C++/Hello.txt");
    out<<"Hello";
    out.close();
    ifstream in ("D:/Nidhi batch/10june_SE/C++/Hello.txt"); 
    in>>str;
    cout<<str;
    in.close();
}