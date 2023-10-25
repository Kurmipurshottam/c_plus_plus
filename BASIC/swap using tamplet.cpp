#include<iostream>
using namespace std;
template<typename t>
void swap(t a,t b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n::After Swaping::";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
}
void get()
{
	int a,b;
	cout<<"enter  a = ";
	cin>>a;
	cout<<"enter b = ";
	cin>>b;
}
int main()
{
//	cout<<get();
	cout<<swap(2,3);
	return 0;
}
