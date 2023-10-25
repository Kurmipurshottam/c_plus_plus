//operater overloading is compile time polymorphism
//operater overloading giver some functionalita to perform operation
#include<iostream>
using namespace std;
class xyz{
	int no1;
	public:
		void get()
		{
			cout<<"Enter no1 = ";
			cin>>no1;
		}
		void operator ++()
		{
			++no1;
		}
		void display()
		{
			cout<<"no1 = "<<no1;
		}
};
int main()
{
	xyz x;
	x.get();
	++x;
	x.display();
	return 0;
}
