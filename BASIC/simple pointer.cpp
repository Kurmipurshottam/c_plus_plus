#include<iostream>
using namespace std;
int main()
{
	int num=10;
	int *ptr=&num;
	cout<<"print number : "<<num<<endl;
	cout<<"adress of number : "<<&num<<endl;//print threw veriable
	
	cout<<"adress of number : "<<ptr<<endl;
	cout<<"number : "<<*ptr<<endl;//print threw pointer veriable
	
	*ptr=25;//update threw pointer
	cout<<"updated number : "<<*ptr;

	return 0;
}

