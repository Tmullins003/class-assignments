#include <iostream>
//timothy mullins csc 144a
using namespace std;

int main()
{
int n1=0; // variables defined because of an error kept popping up about n1 through n3 was not in scope
int n2=0;
int n3=0;


    cout << "enter three numbers: \n"; // prompts for user's input
    cin>> n1>>n2>>n3;

// lines 16-22 are for determining when all variables equal or dont equal with a nested if-else statement
       if (n1==n2)
    {
        if (n1!=n3)
            cout << "all values are not equal therefore: \n ";
        else
            cout << "values are equal \n";
    }


    // lines 17-32 are for determining the largest number in a nested if-else statement

    if (n1 >= n2)
    {
        if (n1>=n3)
            cout << "largest number: " << n1;
        else
            cout << "largest number: " << n3;

    }

    else
    {
        if (n2>=n3)
            cout << "largest number: " << n2;
        else
            cout << "largest number: " << n3;
    }

//lines 36-50 are used to determine the smallest number in an nested if else statement

    if (n1<=n2)
    {
        if (n1<=n3)
            cout << "\nsmallest number: " << n1;
        else
            cout<< "\nsmallest number: " << n3;
    }

    else
    {
        if (n2 <= n3)
            cout<< "\nsmallest number: " << n2;
        else
            cout<< "\nsmallest number: " <<n3;
    }

}

/**
-pseudo code:
    -define variable and allow for a users input
    -compare the 3 variables in 3 individual if statements to find largest #
    -compare the 3 variables in 3 individual if statements to find smallest #
    -have an else statement to display all values equal
**/
