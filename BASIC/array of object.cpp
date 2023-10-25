//array of object
#include<iostream>
using namespace std;
class employee{
	int id;
	string name;
	public:
		void get()
		{
			cin>>name>>id;
		}
		void display()
		{
			cout<<"\nname : "<<name<<endl;
			cout<<"id : "<<id<<endl;
		}
};
int main()
{
	employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter name or id for "<<i+1<<" employee : ";
		e[i].get();
	}
	for(i=0;i<5;i++)
	{
		cout<<"\ndetails for "<<i+1<< " employee : ";
		e[i].display();
	}
	return 0;
}
