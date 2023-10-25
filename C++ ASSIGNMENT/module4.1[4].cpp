#include<iostream>
using namespace std;
class calculater{
	public:
		void add()
		{
			int no1,no2;
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<no1<<"+"<<no2<<"="<<no1+no2;						
		}
		void substraction()
		{
			int no1,no2;
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<no1<<"-"<<no2<<"="<<no1-no2;						
		}
		void multiplication()
		{
			int no1,no2;
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<no1<<"*"<<no2<<"="<<no1*no2;						
		}
		void division()
		{
			int no1,no2;
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<no1<<"/"<<no2<<"="<<no1/no2;						
		}
		void modulo()
		{
			int no1,no2;
			cout<<"Enter no1 = ";
			cin>>no1;
			cout<<"Enter no2 = ";
			cin>>no2;
			cout<<no1<<"%"<<no2<<"="<<no1%no2;						
		}

};
int main()
{
	char ch;
	calculater c;
	cout<<"-------select following-------";
	cout<<"\n(+) --> for addition";
	cout<<"\n(-) --> for substraction";
	cout<<"\n(*) --> for multiplication";
	cout<<"\n(/) --> for division";
	cout<<"\n(%) --> for modulo";
	cout<<"\n-----------------------------";
	cout<<"\nenter your choice = ";
	cin>>ch;
	switch(ch)
	{
		case '+':
			c.add();
			break;
		case '-':
			c.substraction();
			break;
		case '*':
			c.multiplication();
			break;
		case '/':
			c.division();
			break;
		case '%':
			c.modulo();
			break;
		default:
			cout<<":: Invalid choice ::";			
	}
	return 0;
}
