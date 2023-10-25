#include<iostream>
using namespace std;
int main()
{
	int ch,l,w,r,area;
	cout<<"1 for area circle";
	cout<<"\n2 for area of rectangle";
	cout<<"\nenter your choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"\nenter readius = ";
			cin>>r;
			area=3.14*r*r;
			cout<<"\narea of circle = "<<area;
			break;
		case 2:
			cout<<"\nenter length and width = ";
			cin>>l>>w;
			area=l*w;
			cout<<"\narea of rectangle = "<<area;
			break;
		default:
			cout<<"\ninvalid choice";
	}
	
	return 0;
}
