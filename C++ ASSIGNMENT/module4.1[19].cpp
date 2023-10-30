#include <iostream>
using namespace std;
template <typename T> 
void bubbleSort(T a[], T&n)
{
	for (int i=0;i<n;i++)
		for (int j=i+1;j<n;j++)
			if (a[j] < a[i])
				swap(a[j], a[i]);
}
int main()
{
	int n,a[100];
	cout<<"How Manyvalue do want to enter :- ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element :- ";
		cin>>a[i];
	}
	bubbleSort(a,n);
	cout << "Sorted array : ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}
