#include<iostream>
using namespace std;
int sum(int x,int y)
{
	return x+y;
}
int sum(int x,int y,int z)
{
	return x-y-z;
}
int main()
{
	cout<<"minus"<<sum(3,2,1);
	cout<<"\nadd"<<sum(3,2);
	
	return 0;
}

