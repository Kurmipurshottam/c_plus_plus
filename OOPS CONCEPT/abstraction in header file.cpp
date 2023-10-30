/* Abstraction in headerfile(function)::
-->One more type of abstraction in C++ can be header files. 
For example, consider the pow() method present in math.h header file. 
Whenever we need to calculate the power of a number, we simply call the 
function pow() present in the math.h header file 
 */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	cout<<"power :- "<<pow(2,3);//inbuild function of math.h 
	cout<<"\nabs :- "<<abs(-55);//abstraction in class file is known as abstraction in function
	return 0;
}
