#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct cus_inf {


	string name;
	long amount;         //  the money
	int a_num;          // account number

};


cus_inf cus[10];       //array for custmors 
int cus_num = 0;       // The counter 
int account_number;


int new_account()
{
	cout << " Enter The customer name : ";
	cin >> cus[cus_num].name;
	cout << "==========================" << endl;

	cout << " Enter The customer account Number : ";
	cin >> cus[cus_num].a_num;
	cout << "==========================" << endl;


	int x;

	/*for (int i = 0; i < cus_num; i++)
	{
		x = cus[i].a_num;
		if (cus[i].a_num == x)
		{
			cout << "This Account number has already use Plz. Enter another one . ";
			return 0 ;

		}
	}*/
	cout << "Enter The customer Money : ";
	cin >> cus[cus_num].amount;
	cout << "==========================" << endl;
	cout << "                                     " << endl;
	cout << "The account is created ...";
	cus_num = cus_num + 1;
	return 0;
}

// if the customer need to despoit
int despoit_A()
{

	cout << "Enter The customer Account Number : ";
	cin >> account_number;
	cout << "==============================================" << endl;

	for (int i = 0; i < cus_num; i++)
	{
		if (cus[i].a_num == account_number)
		{
			cout << "                                     " << endl;
			cout << "Enter The Money The customer will Despoit : ";
			int money;                              // the amount of money that the user will add 
			cin >> money;

			if (money > 0)
			{
				cus[i].amount = cus[i].amount + money;
				cout << cus[i].amount << endl;
			}
			else
			{
				return 0;
			}

		}
	}
}

// if the customer need to withder 
int withdr_A()
{

	cout << "Enter The customer Account Number : ";
	cin >> account_number;
	cout << "==============================================" << endl;

	for (int i = 0; i < cus_num; i++)
	{
		if (cus[i].a_num == account_number)
		{
			cout << "                                     " << endl;
			cout << "Enter The Money The customer will Withdr : ";
			int money;                                              // the amount of money that the user will take 
			cin >> money;
			if (money > 0 && money < cus[i].amount)
			{
				cus[i].amount = cus[i].amount - money;
			}
			else
			{
				return 0;
			}

			break;
		}
	}

}

// to know the information about a customer
void balance()
{

	cout << "Enter The customer Account Number : ";
	cin >> account_number;
	cout << "==============================================" << endl;

	for (int i = 0; i < cus_num; i++)
	{
		if (cus[i].a_num == account_number)
		{
			cout << "                                     " << endl;
			cout << "The customer Name : " << cus[i].name << endl;
			cout << "                                     " << endl;
			cout << " The customer Money : " << cus[i].amount << endl;
			cout << "                                     " << endl;
			break;
		}
	}
}

// veiw all the accounts on the system 
void all_account_list()
{
	cout << "All Accounts : " << endl;
	cout << "==========================" << endl;
	cout << "                                     " << endl;

	for (int i = 0; i < cus_num; i++)
	{
		cout << " Name : " << cus[i].name << endl;
		cout << "                                     " << endl;
		cout << "Number Account : " << cus[i].a_num << endl;
		cout << "                                     " << endl;
		cout << "  Money : " << cus[i].amount << endl;
		cout << "                                     " << endl;
		cout << "======================================" << endl;
	}
}

// close an account by make the last customer take the place of the customer who will close his account 
void close_an_Account()
{
	cout << "Enter The customer Account Number : ";
	cin >> account_number;
	cout << "==============================================" << endl;

	cout << "                                     " << endl;
	for (int i = 0; i < cus_num; i++)
	{
		if (cus[i].a_num == account_number)
		{
			cus[i].name = cus[cus_num - 1].name;
			cus[i].a_num = cus[cus_num - 1].a_num;
			cus[i].amount = cus[cus_num - 1].amount;
			cus_num = cus_num - 1;
			break;
		}
		cout << "The Account has been closed :) ." << endl;
	}

}

// change the information about the customer
void modify_account()
{
	cout << "Enter The customer Account Number : ";
	cin >> account_number;
	cout << "==============================================" << endl;

	for (int i = 0; i <= cus_num; i++)
	{
		if (cus[i].a_num == account_number)
		{
			cout << "                                     " << endl;
			cout << "The customer Name : " << cus[i].name << endl;
			cout << "                                     " << endl;
			cout << " Your Money : " << cus[i].amount << endl;
			cout << "                                     " << endl;



			cout << "==========================" << endl;

			cout << " Enter The customer name : ";
			cin >> cus[i].name;
			cout << "                                     " << endl;
			cout << "Enter The customer Money : ";
			cin >> cus[i].amount;
			cout << "                                     " << endl;

			cout << "==========================" << endl;

			cout << "The Account has Modified :) ." << endl;
		}
	}
}

void main()
{

	// show the options that the system is offered 

	int n_option;

	do
	{
		cout << "WELCOME :D -_- O.o" << endl;
		cout << "===============" << endl;
		cout << "1) Add New Account " << endl;
		cout << "                                     " << endl;
		cout << "2) Despoit Amount " << endl;
		cout << "                                     " << endl;
		cout << "3) Withdr Amount " << endl;
		cout << "                                     " << endl;
		cout << "4) Blance Enquiry " << endl;
		cout << "                                     " << endl;
		cout << "5) All account Holder list " << endl;
		cout << "                                     " << endl;
		cout << "6) Close An Account " << endl;
		cout << "                                     " << endl;
		cout << "7) Modify An Account" << endl;
		cout << "                                     " << endl;
		cout << "8) Exit  " << endl;
		cout << "==========================" << endl;
		cout << "                                     " << endl;

		cout << "PRESS THE NUMBER OF OPTION YOU WANT TO DO (1 -> 8): ";

		cin >> n_option;
		system("cls");


		if (n_option == 1)
		{
			new_account();
			system("cls");
		}

		if (n_option == 2)
		{
			despoit_A();
			system("cls");
		}
		else if (n_option == 3)
		{
			withdr_A();
			system("cls");
		}
		else if (n_option == 4)
		{
			balance();
			system("cls");
		}
		else if (n_option == 5)
		{
			all_account_list();
			system("cls");
		}
		else if (n_option == 6)
		{
			close_an_Account();
			system("cls");
		}
		else if (n_option == 7)
		{
			modify_account();
			system("cls");
		}
		else if (n_option == 8)
		{
			cout << "THANKS FOR USING BANK MANAGMENT SYSTEM " << endl;
			break;
		}


	} while (true);

	system("pause");
}