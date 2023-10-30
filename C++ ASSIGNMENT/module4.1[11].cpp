#include<iostream>
using namespace std;
class  student{
	int roll_no;
	public:
		void get_stu()
		{
			cout<<"\nEnter Student RollNumber :- ";
			cin>>roll_no;
		}
		void display_stu()
		{
			cout<<"\nThe Student RollNumber is :- "<<roll_no;
		}
};
class test:public student{
	protected:
	int mark1,mark2;
	public:
		void get_marks()
		{
			cout<<"\nEnter Maths Mark :- ";
			cin>>mark1;
			cout<<"\nEnter English Mark :- ";
			cin>>mark2;
		}
		void display_mark()
		{
			cout<<"\nThe Maths Mark is :- "<<mark1;
			cout<<"\nThe English Mark is :- "<<mark2;
		}
};
class result : public test{
	int total;
	public:
	    void display_total()
	    {
	    	cout<<"\nTotal Marks is :- "<<mark1+mark2;
		}
};

int main()
{  
	// obj is result class 
	result r1;
	
	r1.get_stu();
	r1.get_marks();
	cout<<"\n---------------------------\n";
	r1.display_stu();
	r1.display_mark();
	r1.display_total();
	return 0;
}
