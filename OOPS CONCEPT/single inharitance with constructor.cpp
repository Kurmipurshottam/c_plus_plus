#include<iostream>
using namespace std;
class a{
	public:
		a()
		{
			cout<<" a class"<<endl;
		}
};
class b:public a{
	public:
		b()
		{
			cout<<" b class";
		}	
};
int main()
{
	b b1;
}
