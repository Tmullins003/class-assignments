#include <iostream>
// timothy mullins, csc 141a, assignment 2, date completed 9/20
using namespace std;

int main()
{

    cout << "Enter three numbers: \n";
    cin >> n1>> n2>> n3;// n of some number is a variable representing a users inputted number

    if(n1 >= n2 && n1 >= n3) // comparing n1 to n2 and n3 to find the largest number within that line
    {
        cout << "Largest number: " << n1;
    }

    if(n2 >= n1 && n2 >= n3) // comparing n2 to n1 and n3 to find the largest number in that line
    {
        cout << "Largest number: " << n2;
    }

    if(n3 >= n1 && n3 >= n2) // comparing n3 to n1 and n2 to find the largest number in that line
    {
        cout << "Largest number: " << n3;
    }
    if (n1 <= n2 && n1<= n3) // comparing n1 to n2 and n3 again to find smallest
    {
        cout << "\nsmallest number: " << n1;

    }
    if (n2 <= n1 && n2 <= n3) // comparing n2 to n1 and n3 to find smallest number
    {
        cout << "\nsmallest number: " << n2;

    }
    if (n3 <= n1 && n3 <= n2)
    {
        cout << "\nsmallest number: " << n3;// comparing n3 to n1 and n2 to find smallest
    }
    if (n3==n2 && n3==n1)
    {
        cout << "\nall values equal :D";
    }
}