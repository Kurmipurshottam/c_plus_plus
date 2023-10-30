//abstraction in class
/*
-->An abstract class is a class that is designed to be specifically used as a base class. 
An abstract class contains at least one pure virtual function. 
You declare a pure virtual function by using a pure specifier (= 0) in the declaration of a virtual 
member function in the class declaration.
*/
#include<iostream>
using namespace std;
class add{
	protected:
		int no1,no2;
	public:
		void get()
		{
			cout<<"Enter no1 :- ";
			cin>>no1;
			cout<<"Enter no2 :- ";
			cin>>no2;
		}
		virtual void addition()=0;
};
class add1:public add{
	public:
		void addition()
		{
			cout<<"addition is = "<<no1+no2;
		}
};
int main()
{
	add *ptr;
	add1 a;
	ptr=&a;
	ptr->get();
	ptr->addition();	
	return 0;
}
