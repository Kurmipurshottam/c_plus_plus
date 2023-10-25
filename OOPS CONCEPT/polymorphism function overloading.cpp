//polymorphism = many forms
//two types of polymorphism
//1]compile time
//1.1]function overloading
//1.2]operater overloading
//2]run time polymorphism
#include<iostream>
using namespace std;
class operation{
	double no1,no2;
	public:
		void ope()
		{
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<"\nuser input addition = "<<no1+no2;
		}
		void ope(int n1,int n2)
		{
			no1=n1;
			no2=n2;
			cout<<"\nint addition = "<<no1+no2;
		}
		void ope(double a,double b)
		{
			no1=a;
			no2=b;
			cout<<"\nfloat addition = "<<no1+no2;
		}
};

int main()
{
	operation obj;
	obj.ope();
	obj.ope(5,3);
	obj.ope(4.3,4.7);
	return 0;
}
