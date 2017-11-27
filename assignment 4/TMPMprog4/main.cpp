#include <iostream>
//timothy mullins csc 144a
//program assorts 3 variables from large middle and small
using namespace std;

int main()
{
//variable declaration
int n1;
int n2;
int n3;
int large;
int middle;
int small;


//asking for users input
cout << "please enter 3 values good sir" <<endl;
cin >> n1 >> n2 >> n3;

//finding largest number out of 3
        if (n1 >= n2) // if number1 is the greatest number assign to largestvalue
        {
            if (n1 >= n3)
            {
                {
                    large = n1;
                }
            }
        }

        if (n2 >= n1) // if number2 is the greatest number assign to largestvalue
        {
            if (n2 >= n3)
            {
                {
                    large = n2;
                }
            }
        }

        if (n3 >= n1) // if number3 is the greatest number assign to largestvalue
        {
            if (n3 >= n2)
            {
                    {
                        large = n3;
                    }
            }

        }


//finding middle number
        if (n1 <= n2)
        {
            if (n1 >= n3)
            {
                if(n2 >= n3)
                {
                    middle = n1;
                }
            }
        }
        if (n2 <= n1)
        {
            if (n1 >= n3)
            {
                if (n2 >= n3)
                {
                    middle = n2;
                }
            }
        }
        if (n2 >= n3)
        {
            if (n1 <= n3)
            {
                if (n1 <= n2)
                {
                    middle = n3;
                }
            }
        }

        if (n1 <= n2) // if number1 is the greatest number assign to largestvalue
        {
            if (n1 <= n3)
            {
                {
                    small = n1;
                }
            }
        }

        if (n2 <= n1) // if number2 is the greatest number assign to largestvalue
        {
            if (n2 <= n3)
            {
                {
                    small = n2;
                }
            }
        }

        if (n3 <= n1) // if number3 is the greatest number assign to largestvalue
        {
            if (n3 <= n2)
            {
                    {
                        small = n3;
                    }
            }

        }


cout << "largest number: "<< large <<"\nmiddle number: " << middle <<"\nsmallest number: "<< small<<endl;



























}
