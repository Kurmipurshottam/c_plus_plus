//friend function
#include<iostream>
using namespace std;
class msg
{
	int roll_no;
	public:
		friend void get(msg m);
};
void get(msg m)
{
	cout<<"Enter roll no = ";
	cin>>m.roll_no;
	cout<<"Roll no = "<<m.roll_no;
}
int main()
{
	msg m;
	get(m);
	return 0;
}
