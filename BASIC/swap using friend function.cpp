//swap program using friend function
#include<iostream>
using namespace std;
class test{
	int no1,no2;
	public:
		void getdata()
		{
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
		}
		void display()
		{
			cout<<"\n::::before swaping::::";
			cout<<"\nno1 = "<<no1;
			cout<<"\nno2 = "<<no2;
		}
		friend void swap(test t);
};
void swap(test t)
{
	t.no1=t.no1+t.no2;
	t.no2=t.no1-t.no2;
	t.no1=t.no1-t.no2;
	cout<<"\n::::after swaping::::";
	cout<<"\nno1 = "<<t.no1;
	cout<<"\nno2 = "<<t.no2;
}
int main()
{
	test t;
	t.getdata();
	t.display();
	swap(t);
	return 0;
}
