#include<iostream>
using namespace std;
class student{
	int roll;
	public:
		void get();	
		void display();
};
void student::get()//::-->is a scop resolution operater
{
	cout<<"enter roll no = ";
	cin>>roll;	
}
void student::display()
{
	cout<<"roll no is = "<<roll;
}	
int main()
{
	student s;
	s.get();
	s.display();	
	return 0;
}
