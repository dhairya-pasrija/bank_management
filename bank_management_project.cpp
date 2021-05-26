#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class bank
{
char name[50],address[50],y;
int balance;
public:
void open_account();
void deposite_money();
void withdraw_money();
void display_account();	
};
void bank :: open_account()
{
	cout<<"Enter your full name :: ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"Enter your address :: ";
	cin.ignore();
	cin.getline(address,50);
	cout<<"What type of account you want to open ? for saving type s and for current type c :: ";
	cin>>y;
	cout<<"Enter amount for deposite :: ";
	cin>>balance;
	cout<<"Your account has been created !!"<<endl;
	
	
}
void bank::deposite_money()
{
	int a;
	cout<<"Enter how much you want to deposite :: ";
	cin>>a;
	balance+=a;
	cout<<"Total Amount present :: "<<balance;
 }
 void bank::display_account()
 {
 	cout<<"Your full name                   :: "<<name<<endl;
 	cout<<"Your Address ::                  :: "<<address<<endl;
 	cout<<"Type of account that you opened  :: "<<y<<endl;
 	cout<<"Amount you deposited             :: "<<balance<<endl;
  } 
  void bank :: withdraw_money()
  {
  	float amount;
  	cout<<"\n Withdraw :: "<<endl;
  	cout<<"Enter amount to withdraw :: ";
  	cin>>amount;
  	balance-=amount;
  	cout<<"Now total amount left :: "<<balance;
  }
int main()
{
	int ch,x;
	bank obj;
	do{
	cout<<endl<<"1) open Account."<<endl;
	cout<<"2) Deposite Money."<<endl;
	cout<<"3) Withdraw Money."<<endl;
	cout<<"4) Display Account."<<endl;
	cout<<"5) Exit."<<endl;
	cout<<"Select the option from above :: "<<endl;
	cin>>ch;
	switch (ch)
	{
		case 1:
			obj.open_account();
			break;
		case 2:
			obj.deposite_money();
			break;
		case 3:
			obj.withdraw_money();
			break;
		case 4:
			obj.display_account();
			break;
		case 5:
			if(ch==5)
			{
				exit(1);
			}
		default:
			cout<<"This value does not exist!! Try again.."<<endl;
	}
		cout<<endl<<"Do you want to select another option then press y.. ";
		cout<<endl<<"And if you want to exit press n..";
		x=getch();
		if(x=='n'||x=='N')
		{
			exit(0);
		}
	}while(x=='y' || x=='Y');

	getch();
	return 0;
}
