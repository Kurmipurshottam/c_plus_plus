#include<iostream>
using namespace std;
class cricketer{
	public:
		string name,country;
		int match_played;
		void getdata()
		{
			cout<<"Enter name = ";
			cin>>name;
			cout<<"Enter country = ";
			cin>>country;
			cout<<"Enter how many match played = ";
			cin>>match_played;
		}
		void display()
		{
			cout<<"name="<<name;
			cout<<"\ncountry="<<country;
			cout<<"\nmatch_played="<<match_played;
		}	
};
class batsman:public cricketer
{
	public:
		int total_run;
		float average;
		int best_performance;
		void geter()
		{
			cout<<"Enter total runs = ";
			cin>>total_run;
			cout<<"Enter best performance = ";
			cin>>best_performance;
		}
		void diser()
		{
			cout<<"\ntotal runs = "<<total_run;
			cout<<"\naverage = "<<total_run/match_played;
			cout<<"\nbest performance = "<<best_performance;
		}
};
int main()
{
	batsman b;
	b.getdata();
	b.geter();
	cout<<"\n---------------------\n";
	b.display();
	b.diser();
	return 0;
}
