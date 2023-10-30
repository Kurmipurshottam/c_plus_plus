#include<iostream>
using namespace std;
template<typename T>
void swap_(T& a, T& b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n::After Swaping::";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
}
int main()
{
	int a,b;
	cout<<"enter a = ";
	cin>>a;
	cout<<"enter b = ";
	cin>>b;
	cout<<"::Before Swap::";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
	swap_(a,b);
	return 0;
}
