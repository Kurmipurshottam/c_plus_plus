#include<iostream>
using namespace std;
class test{
	
	int no1,no2;
	public:
		void get()
		{
			cout<<"Enter your No1 :-";
			cin>>no1;
			cout<<"Enter your No2 :-";
			cin>>no2;
	
		}
	friend void find(test t1);
};
void find(test t1)
{
	t1.no1=t1.no1+t1.no2;
	t1.no2=t1.no1-t1.no2;
	t1.no1=t1.no1-t1.no2;
	cout<<"::After Swaping ::\n";
	cout<<"No1 = "<<t1.no1<<"\n"<<"No2 = "<<t1.no2;
	
}
int main()
{
	test t;
	t.get();
	find(t);
	return 0;
}
