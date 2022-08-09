#include<iostream>
using namespace std;
class Friend
{
	int temp;
	public:
		friend int add(Friend,int no);
};
int add(Friend obj,int no)
{
	obj.temp=no;
	obj.temp*=no;
	return obj.temp;
}
int main()
{
	int no;
	cout<<"Enter the value of no:";
	cin>>no;
	Friend f1;
	cout<<add(f1,no);
}
