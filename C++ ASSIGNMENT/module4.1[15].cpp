#include<iostream>
using namespace std;
class area
{
	public:
		void find_area()
		{
			int r;
			cout<<"============ area of circle ============"<<endl;
			cout<<"Enter radius : ";
			cin>>r;
			cout<<"\nArea of circle is :"<<3.14*r*r;
		}
		void find_area(int a,int b)
		{
			int l,w;
			cout<<"\n\n============ area of rectangle ============"<<endl;
			cout<<"Enter length : ";
			cin>>l;
			cout<<"Enter width : ";
			cin>>w;
			a = l;
			b = w;
			cout<<"\nArea of ractangle is : " <<l * w ;
		}
		void find_area(double a,double b)
		{
			int s1,s2;
			cout<<"\n\n============ area of rectangle ============"<<endl;
			cout<<"Enter side 1 : ";
			cin>>s1;
			cout<<"Enter side 2 : ";
			cin>>s2;
			cout<<"\nArea of triangle is : "<<0.5*s1*s2;
		}
};
//main function
int main()
{
	area a;
	a.find_area();
	a.find_area(0,0);
	a.find_area(0.0,0.0);
	return 0;
}
