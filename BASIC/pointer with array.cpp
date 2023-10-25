#include<iostream>
using namespace std;
int main()
{
	int array[]={10,5,15},i;
	int *ptr=array;
	cout<<"location threw pointer"<<endl;
	
	cout<<"first element in array = "<<ptr<<endl;
	cout<<"second element in array = "<<ptr+1<<endl;
	cout<<"thired element in array = "<<ptr+2<<endl;
	
	cout<<"value threw pointer"<<endl;
	cout<<*ptr<<endl;
	cout<<*ptr;
	
//	for(i=0;i<3;i++)
//	{
//		cout<<*ptr[i];
//	}
	return 0;	
}
