#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
//random number Genrate from the user
int computer_choice()
{
	srand(time(0));
	int choice = rand() % 3 + 1;
	return choice;
}
int main()
{
	string name;
	int round,n=1,computer_score=0,user_score=0;
	int i,choice;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	cout<<"\t\tGame\n";
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
//Accept name from user
	cout<<"Enter Your Name :- ";
	cin>>name;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	cout<<"\t\tRounds\n";
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
//Enter Round How Many Round Do You Want To Play
	cout<<"How Many Round Do You Want To Play :- ";
	cin>>round;
//game logic
	for(i=1;i<=round;i++)
	{
		cout<<"\nRound no :- "<<i<<"/"<<round<< endl;
		cout<<"\n"<<name<<" Score :- "<<user_score<< endl;
		cout<<"\nComputer Score :- "<<computer_score<< endl;
		cout<<"\n1. Rock"<< endl;
		cout<<"\n2. Paper"<< endl;
		cout<<"\n3. Scissor"<< endl;
		cout<<"\nEnter Your Choice :- ";
		cin>>choice;
		cout<< endl;
		int c_choice=computer_choice();
		cout<<"Computer choice :- "<<c_choice<< endl;
		if(choice==1 && c_choice==2)
		{
			cout<<"\nComputer Wins! Paper wraps Rock."<< endl;
			computer_score=computer_score+1;
		}
		else if(choice==2 && c_choice==3)
		{
			cout<<"\nComputer Wins! Scissors cut Paper."<< endl;
			computer_score=computer_score+1;
		}
		else if(choice==3 && c_choice==1)
		{
			cout<<"\nComputer Wins! Rock smashes Scissors."<< endl;
			computer_score=computer_score+1;
		}
		else if(c_choice==1 && choice==2)
		{
			cout<<"\n"<<name<<" Wins! Paper wraps Rock."<< endl;
			user_score=user_score+1;
		}
		else if(c_choice==2 && choice==3)
		{
			cout<<"\n"<<name<<" Wins! Scissors cut Paper."<< endl;
			user_score=user_score+1;
		}
		else if(c_choice==3 && choice==1)
		{
			cout<<"\n"<<name<<" Wins! Rock smashes Scissors."<< endl;
			user_score=user_score+1;
		}
		else{
			cout<<"\n"<<"Tie. Play again win the Game."<< endl;
		}
	}	
//winner overall game
	if(computer_score>user_score)
	{
		cout<<":: Computer wins the Game ::"<< endl;
	}
	else if(user_score>computer_score)
	{
		cout<<":: congratulation "<<name<<" wins the Game ::"<< endl;
	}
	else{
		cout<<":: Match was tied ::"<< endl;
	}
	return 0;
}
