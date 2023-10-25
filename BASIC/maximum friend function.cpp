//find max using friend function
#include<iostream>
using namespace std;
class max1{
	int no1,no2;
	public:
		void get_max()
		{
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
		}
		void display()
		{
			cout<<"no1 = "<<no1;
			cout<<"\nno2 = "<<no2;
		}
		friend void maximum(max1 m);
};
void maximum(max1 m)
{
	if(m.no1>m.no2)
	{
		cout<<"\nmaximum no = "<<m.no1;
	}
	else
	{
		cout<<"\nmaximum no  = "<<m.no2;
	}
}
int main()
{
	max1 m;
	m.get_max();
	m.display();
	maximum(m);
	return 0;	
}
