#include "account.h"
#include <iostream>


using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    //display initial balance of each object
    cout<<"account1: " << account1.getName() <<"\nbalance is: $"
        << account1.getBalance();
    cout<<"\naccount2: " << account2.getName() <<"\nbalance is: $"
        << account2.getBalance();

    cout<< "\n\nEnter deposit amount for account1: "; //prompt
    int depositAmount;
    cin >> depositAmount; //obtain user's input
    cout<< "adding "<< depositAmount << " to account1 balance";
    account1.deposit(depositAmount);//add to account1s balance

    //display balances
    cout<<"\naccount1: " << account1.getName() <<"\nbalance is: $"
        << account1.getBalance();
    cout<<"\n\naccount2: " << account2.getName() <<"\nbalance is: $"
        << account2.getBalance();

    cout<< "\nEnter deposit amount for account2: "; //prompt
    cin>> depositAmount; //obtain user's input
    cout << "adding "<<depositAmount << " to account2 balance";
    account2.deposit(depositAmount);//add to account1s balance

    //display balances
    cout<< "\n\naccount1: " <<account1.getName() << " balance is $"
    << account1.getBalance();
    cout<< "\naccount2: " <<account2.getName() << " balance is $"
    << account2.getBalance() <<endl;

    // prompt
    cout<< "would you like to take out money good sir?" << "\ntype yes to start withdrawal process \nor type no to end process now\n";
        int yes,no;
    cin >> yes,no;

    //withdrawing...
    cout<< "\n\nEnter withdrawal amount for account1: "; //prompt
    int withdrawalAmount;
    cin >> withdrawalAmount; //obtain user's input
    cout<< "withdrawing "<< withdrawalAmount << "\naccount1 balance is: ";
    account1.withdrawal(withdrawalAmount);//add to account1s balance

    //display balances
    cout<<"\naccount1: " << account1.getName() <<"\nbalance is: $"
        << account1.getBalance();
    cout<<"\n\naccount2: " << account2.getName() <<"\nbalance is: $"
        << account2.getBalance();

    cout<< "\n\nEnter withdrawal amount for account2: "; //prompt
    cin >> withdrawalAmount; //obtain user's input
    cout<< "withdrawing "<< withdrawalAmount << "\naccount2 balance is: ";
    account2.withdrawal(withdrawalAmount);//add to account1s balance

    //display balances
    cout<< "\n\naccount1: " <<account1.getName() << " new balance is $"
    << account1.getBalance();
    cout<< "\naccount2: " <<account2.getName() << " new balance is $"
    << account2.getBalance() <<endl;



}
