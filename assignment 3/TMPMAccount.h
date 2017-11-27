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
