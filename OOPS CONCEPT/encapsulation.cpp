/*encapsulaation:-
 combining similar data and functions into a single unit called a class. 
 By encapsulating these functions and data, we protect that data from change.
  This concept is also known as data or information hiding
*/
#include<iostream>
using namespace std;
class employee{
	int id;
	public:
		void get()
		{
			cout<<"Enter id = ";
			cin>>id;
		}
		void display()
		{
			cout<<"id = "<<id;
		}
};
int main()
{
	employee e;
	e.get();
	e.display();
	return 0;
}
