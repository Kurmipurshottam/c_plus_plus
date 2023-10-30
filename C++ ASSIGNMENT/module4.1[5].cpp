#include<iostream>
using namespace std;
class bank_account{
	public:
		string ac_holder_name;
		int ac_no;
		string ac_type;
		int balance_amount;
		int deposit_amount;
		int depo_update_balance;
		int with_update_balance;
		int withdraw_amount;
		void getdata()
		{
			cout<<"Enter account holder name = ";
			cin>>ac_holder_name;
			cout<<"Enter account number = ";
			cin>>ac_no;
			cout<<"Enter account type = ";
			cin>>ac_type;
			cout<<"Enter account balance = ";
			cin>>balance_amount;	
		}	
		void deposit()
		{
			cout<<"Enter deposit amount = ";
			cin>>deposit_amount;
			depo_update_balance=balance_amount+deposit_amount;
			cout<<"after deposit amount = "<<depo_update_balance;
		}
		void withdraw()
		{
			cout<<"\nEnter how many amount do you want to withdraw = ";
			cin>>withdraw_amount;
			if(withdraw_amount>depo_update_balance)
			{
				cout<<":: insufficeant balance ::";
			}
			else{
				with_update_balance=depo_update_balance-withdraw_amount;
				cout<<"withdraw successfuly";
				cout<<"\nafter withdraw balance = "<<with_update_balance;
			}
		}
		void display()
		{
			cout<<"\naccount holder name = "<<ac_holder_name;
			cout<<"\naccount number = "<<ac_no;
			cout<<"\naccount type = "<<ac_type;
			cout<<"\naccount balance = "<<balance_amount;
		}
};
int main()
{
	int ch;
	bank_account b;
	b.getdata();
	b.display();
	cout<<"\n-----select following-----";
	cout<<"\n1 for deposit";
	cout<<"\n2 for withdraw";
	cout<<"\n--------------------------";
	cout<<"\nEnter your choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			b.deposit();
			break;
		case 2:
			b.withdraw();
			break;
		default:
			cout<<":: Invaalid choice ::";
			break;
	}
	return 0;
}
