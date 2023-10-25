// template is a genaric data type
#include<iostream>
using namespace std;
template<typename t>
int addition(t a,t b)
{
	return a+b;
}
int main()
{
	cout<<addition(5,3);
	cout<<endl<<addition(2.1,3.7);
	return 0;
}
