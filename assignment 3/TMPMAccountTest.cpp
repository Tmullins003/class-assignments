#include <iostream>
#include "TMPMAccount.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    //display initial balance of each object
    cout<<"account1: " << accout1.getName() <<"\nbalance is: $"
        << account1.getBalance();
    cout<<"account2: " << accout2.getName() <<"\nbalance is: $"
        << account2.getBalance();

    cout<< "\n\nEnter deposit amount for account1: "; //prompt
    int depositAmount;
    cin >> depositAmount; //obtain user's input
    cout<< "adding . . ."<< depositAmount << " to account1 balance";
    account1.deposit(depositAmount);//add to account1s balance

    //display balances
    cout<<"account1: " << accout1.getName() <<"\nbalance is: $"
        << account1.getBalance();
    cout<<"account2: " << accout2.getName() <<"\nbalance is: $"
        << account2.getBalance();

    cout<< "\n\nEnter deposit amount for account2: "; //prompt
    cin>> depositAmount; //obtain user's input
    cout << "adding . . ."<<depositAmount << " to account2 balance";
    account2.deposit(depositAmount);//add to account1s balance

    //display balances
    cout<< "\naccount1: " <<account1.getName() << "balance is $"
    << account1.getBalance();
    cout<< "\naccount2: " <<account2.getName() << "balance is $"
    << account2.getBalance() <<endl;
}
