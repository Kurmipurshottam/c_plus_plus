#include<iostream>
using namespace std;
class employee{
	int id;//globel variable
	string name;
	public:
		employee(int id,string n)
		{
			this->id=id;//here this->id is a class variable
			this->name=n;
		}
		void display()
		{
			cout<<"roll no = "<<id;
			cout<<"name = "<<name;
		}
};
int main()
{
	employee e1(6,"purshottam");
	e1.display();
	return 0;
}
