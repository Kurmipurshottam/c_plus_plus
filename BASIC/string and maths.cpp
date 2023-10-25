#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string name1="xyz",name2="pqr",name3;
	name3=name1+name2;
	cout<<"\nname3="<<name3;
	name3=name1+" "+name2;
	cout<<"\nname3="<<name3;
	cout<<"\nlength of name3 = "<<name3.length();//find yhe length of the string
	cout<<"\nprint the name3 index 1 charcter="<<name3[1];//print the charcter that stored in 1th position
	name3[0]='j';//update the name3 that stored in 0th position
	cout<<"\nname3="<<name3<<endl;
	cout<<"sqrt of the 25 ="<<sqrt(25);//math equation
		
	return 0;
}
