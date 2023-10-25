//array with in class
#include<iostream>
using namespace std;
class student{
	int mark[3];
	int roll_no;
	string name;
	public:
		student()
		{
			cout<<"Enter name :";
			cin>>name;
		}
		void get()
		{
			
			cout<<"Enter roll no :";
			cin>>roll_no;
			for(int i=0;i<3;i++)
			{
				cout<<"Enter mark :";
				cin>>mark[i];
			}
		}
		void display()
		{
			cout<<"name :"<<name<<endl;
			cout<<"rollno :"<<roll_no;
			for(int i=1;i<=3;i++)
			{
				cout<<"\n"<<i<<"subject mark ="<<mark[i];
			}
		}
};
int main()
{
	student s;
	s.get();
	s.display();
	
	return 0;
}
