#include<iostream>
using namespace std;
class a{
	public:
		int id ;
		void info()
		{
			cout<<"enter id = ";
			cin>>id;
		}
};
class b:public a{
	public:
		void display()
		{
			cout<<"id = "<<id;
		}
};
int main()
{
	b b1;
	b1.info();
//	b1.id=9;//extract --> set or change the value directly
	b1.display();
	return 0;
}
