#include<iostream>
using namespace std;
class Friend
{
	int x;
	public:
		int data(int no)
		{
			no+=no;
			return no;
		}	
	friend class Frnd;
};
class Frnd
{
	public:
		int printdata(Friend& fd,int a)
		{
			fd.x=a;
			return fd.x;
		}
};
int main()
{
		Friend f1;
		cout<<f1.data(20);
		Frnd fn;
		cout<<endl<<fn.printdata(f1,50);
}

