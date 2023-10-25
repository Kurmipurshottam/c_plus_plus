#include<iostream>
using namespace std;
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;

}
int main()
{
	int x,y;
	cout<<"Enter value of x::";
	cin>>x;
	cout<<"Enter value of y::";
	cin>>y;
	cout<<"Before swaping";
	cout<<"\nx = "<<x;
	cout<<"\ny = "<<y;
	cout<<"\nAfter swaping::";
	swap(x,y);
	cout<<"\nx = ";
	cout<<"\ny = ";

	
	return 0;
}
