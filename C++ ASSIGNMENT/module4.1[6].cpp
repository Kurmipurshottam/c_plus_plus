#include<iostream>
using namespace std;
class perform{
	public:
		inline void multi(float no1,float no2)
		{
			cout<<"Multiplication("<<no1<<"*"<<no2<<")="<<no1*no2;
		}
		inline void cube(float no1)
		{
			cout<<"cube("<<no1<<"*"<<no1<<"*"<<no1<<")="<<no1*no1*no1;
		}
};
int main()
{
	perform p;
	float x,y,z;
	int ch;
	cout<<"\n-----select following-----";
	cout<<"\n1-->for multiplication";
	cout<<"\n2-->for cube";
	cout<<"\n--------------------------";
	cout<<"\nenter your choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Enter value of x = ";
			cin>>x;
			cout<<"Enter value of y = ";
			cin>>y;
			p.multi(x,y);
			break;
		case 2:
			cout<<"Enter value of z = ";
			cin>>z;
			p.cube(z);
			break;
		default:
			cout<<":: invalid input ::";	
	}
	return 0;
}

