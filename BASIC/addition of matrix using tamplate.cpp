//addition of matrix using operater overloading
#include<iostream>
using namespace std;
class addition{
	int array[5];
	public:
		void get()
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<"Enter value = ";
				cin>>array[i];
			}
		}
		void display()
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<array[i]<<"/t";
			}
		}
		void operator +(addition obj)
		{
			int i;
			addition result[100];
			for(i=0;i<5;i++)
			{
				result[i]=array[i]+obj.array[i];
			}
			for(i=0;i<5;i++)
			{
				cout<<result[i]<<"\t";
			}
		}
};
int main()
{
	addition arr1,arr2;
	aar1.get();
	arr2.get();
	cout<<"::Displaying aaray::";
	cout<<"::first matrix::";
	arr1.display();
	cout<<"::second matrix::";
	arr2.display();
	arr1+arr2;
	return 0;
}
