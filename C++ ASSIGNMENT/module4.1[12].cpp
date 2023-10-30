#include<iostream>
using namespace std;
void calculation(int no1,int no2)
{
	cout<<"Addition :- "<<no1<<"+"<<no2<<"="<<no1+no2;
}
void calculation(double no1,double no2)
{
	cout<<"\nSubstraction :- "<<no1<<"-"<<no2<<"="<<no1-no2;
}
void calculation(double no1,int no2)
{
	cout<<"\nMultiplication :- "<<no1<<"*"<<no2<<"="<<no1*no2;
}
void calculation(int no1,double no2)
{
	cout<<"\nDivision :- "<<no1<<"/"<<no2<<"="<<no1/no2;
}
int main()
{
	calculation(10,10);
	calculation(40.0,10.0);
	calculation(5.0,8);
	calculation(500,10.0);
	
	return 0;
}
