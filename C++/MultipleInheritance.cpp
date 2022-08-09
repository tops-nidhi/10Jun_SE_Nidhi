#include<iostream>
using namespace std;
class Pratham
{
	public:
		int pid;
		float pper;
		int pdata()
		{
			cout<<"Enter your id:";
			cin>>pid;
			cout<<"Enter your Percentage:";
			cin>>pper;
		}
};
class Isha
{
	public:
		int iid;
		float iper;
		int idata()
		{
			cout<<"Enter your id:";
			cin>>iid;
			cout<<"Enter your Percentage:";	
			cin>>iper;
		}	
};
class Tops :public Pratham, public Isha
{
	public:
		int showdata()
		{
			cout<<"____________________________________________________";
			cout<<"\nPratham's id is:\t\t"<<pid<<"     \n\tpercentage is:\t\t"<<pper;
			cout<<"\nIsha's id is:\t\t\t"<<iid<<"  \n\tpercentage is:\t\t"<<iper;
		}
};
int main()
{
	Tops t;
	t.pdata();
	t.idata();
	t.showdata();
	
}
