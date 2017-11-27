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

// below is used to find the middle code and i couldnt really figure out a way to do it without &&
if(n1>n2 && n1>n3 && n2>n3)
 {
 cout<<"\nmiddle number is "<<n2;
 }
 else if(n1>n2 && n2>n3 && n2<n3)
 {
 cout<<"\nmiddle number is "<<n3;
 }
 else if(n2>n1 && n2>n3 && n1>n3)
 {
 cout<<"\nmiddle number is "<<n1;
 }
 else if(n2>n1 && n2>n3 && n1<n3)
 {
 cout<<"\nmiddle number is "<<n3;
 }
 else if(n3>n1 && n3>n2 && n1>n2)
 {
 cout<<"\nmiddle number is "<<n1;
 }
 else if(n2>n1 && n2>n3 && n2>n1)
 {
 cout<<"\nmiddle number is "<<n1;
 }


}
/*
psuedo code

- prompt user to enter three digits
-intialize variables to zero to prevent any kind of errors
-then determine what is largest by comparing n1,n2, and n3 through nested if else statements
-do the same thing except for smallest
-to find middle number make 1 if statement using two && and then make a series of else if statements afterwords for every possible case

last note this code does completely work
