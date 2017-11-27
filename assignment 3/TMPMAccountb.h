#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

 class Account {
 public:
    //account constructor with two parameters
    Account (std::string accountName, int initialBalance): name{accountName}
    { // assign accountName to data member name

        //validate that the initialBalance is greater than 0;if not,
        //data member balance keeps its default initial value of 0
        if (initialBalance > 0){
            balance = initialBalance;
         }
    }

    //function that deposits, adds, only a valid amount to the balance
    void deposit (int depositAmount){
        if (depositAmount > 0){
            balance = balance + depositAmount;
        }

    }
    //function that withdrawals, subtracts, only a valid amount to the balance
    void withdrawal (int withdrawalAmount){
        if (withdrawalAmount != balance){
            balance = balance - withdrawalAmount;
        }
    }
    // function returns the balance
    int getBalance() const{
        return balance;
    }

    //function sets the name
    void setName (std::string accountName){
        name = accountName;
    }

    //function that returns the name
    std::string getName() const {
        return name;
    }

private:
    std::string name; //account name data member
    int balance{0};//data member with default initial value
}; // end class Account
#endif // ACCOUNT_H
/**
UML Diagram
          ________________________________________
         |               Account                  |
         |________________________________________|
         |  -Name: sting                          |
         |  -balance : int                        |
         |________________________________________|
         |<<constructor>> Account (accountname,   |
         |  :string, initialbalance: int          |
         | +deposit (depositAmount: int)          |
         |  +withdrawal (withdrawalAmount: int    |
         | +getBalance():int                      |
         | +setname (accoutname:sting)            |
         |+getname():string                       |
         |________________________________________|


pseudo code!!!
    - first set up project then create class thus making a .h file and .cpp file
    -copy code from book regarding the .h file and .cpp file
    -withdrawal function will be similiar code to deposit function
        -make sure withdrawal amount cant equal balance
        -make sure balance is the subtraction of current balance and withdrawalamount
    -in the .cpp file pretty much copy the deposit function and replace deposit with withdrawal
    -copy and paste balance displaying code to show new balance after withdrawal
**/
