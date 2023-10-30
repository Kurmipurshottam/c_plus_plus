#include<iostream>
using namespace std;
class large{
	
	int no1,no2;
	public:
		void get()
		{
			cout<<"Enter your No1 :-";
			cin>>no1;
			cout<<"Enter your No2 :-";
			cin>>no2;
		}
	friend void find(large);
};
void find(large l1)
{
	
	if(l1.no1>l1.no2)
	{
		cout<<"no1 is max";
	}
	else
	{
		cout<<"no2 is max";
	}
}
int main()
{
	large l;
	l.get();
	find(l);
	return 0;
}
