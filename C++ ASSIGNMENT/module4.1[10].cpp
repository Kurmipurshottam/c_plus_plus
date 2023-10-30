#include<iostream>
using namespace std;
class person{
		string name;
		int age;
		public:
			void getdata()
			{
				cout<<"Enter name = ";
				cin>>name;
				cout<<"Enter age = ";
				cin>>age;
			}
			void display()
			{
				cout<<"Name = "<<name;
				cout<<"\nAge = "<<age;
			}
};
class student{
		float per;
		public:
			void get_data()
			{
				cout<<"Enter percentage = ";
				cin>>per;
			}
			void dis_play()
			{
				cout<<"\nPercentage = "<<per;
			}
};
class teacher:public person,public student{
		int salary;
		public:
			void get()
			{
				cout<<"Enter salary = ";
				cin>>salary;
			}
			void dis()
			{
				cout<<"\nTeachers Salary = "<<salary;
			}
};
int main()
{
	teacher t;
	t.getdata();
	t.get_data();
	t.get();
	cout<<"\n-----------------------------\n";
	t.display();
	t.dis_play();
	t.dis();
	return 0;
}
