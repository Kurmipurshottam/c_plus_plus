#include<iostream>
using namespace std;
int main()
{
	int i,no,s_count=0,a_count,s_avg=0;
	cout<<"Enter end point : ";
	cin>>no;
	cout<<":: elements are as under ::"<<endl;
	for(i=1;i<=no;i++)
	{
		cout<<i<<endl;
		if(i%2==0)
		{
			s_count=s_count+i;
			a_count++;
		}
	}
	s_avg=s_count/a_count;
	cout<<"sum of even value is = "<<s_count<<endl;
	cout<<"avreage of even value is = "<<a_count;	
	return 0;
}
