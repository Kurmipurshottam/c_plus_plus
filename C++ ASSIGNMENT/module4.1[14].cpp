#include <iostream>
#include <string.h>
using namespace std;
class test
{
	public:
	char s1[25];
	void getstring()
	{
		cout<<"Enter string = ";
		cin>>s1;		
	}
	void display()
	{
		cout<<s1;
	}
	void operator+(test t1)
	{
		cout << "\nAfter Concatenation: " <<strcat(s1, t1.s1);
	}
};
int main()
{
	test t,t1;
	t.getstring();
	t1.getstring();
	cout<<"\n-------------------";
	cout<<"\nFirst String = ";
	t.display();
	cout<<"\nSecond String = ";
	t1.display();
	cout<<"\n-------------------";	
	t+t1;
	return 0;
}
