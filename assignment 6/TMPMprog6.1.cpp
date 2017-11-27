// David Rodriguez, csc-144, Assignment #6, 10/17/13
// This program displays right 4 different right triangles with the hypotenus facing different directions
#include <iostream> // allows program to perform input and output

using namespace std; // program uses cout and endl

// function main begins program execution

int main()
{
    // variable declaration
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;

    for (e=1;e<=10;++e) // for loop starts at 1 and increases in increments of one until ten then stops loop
    {
        for (f=1;f<=l;++f) // for loop dependent on variable l
        {
            cout << "*" << " "; // displays *s and spaces
        }
        cout << "\n"; // starts a new line
    }
    cout << endl; // ends line


    for (c=10;c>=1;--c) // for loop starts at 10 and decreases in increments of one until 1 then stops loop
    {
        for (g=1;g<=c;++g) // for loop dependent on variable c
        {
            cout << "*" << " "; // displays *s and spaces
        }
        cout <<"\n"; // starts a new line
    }
    cout << endl; // ends line


    for (j = 1; j <= 10; j++) // for loop starts at 1 and increases in increments of one until ten then stops loop
	{
		for (h = 10-j; h>0; h--) // for loop dependent on variable j
		{
			cout << " " << " "; // displays two spaces
		}

        for(x = 1; i <= j; i++) // for loop dependent on variable j
        {
			cout << "*" << " "; // displays *s and spaces
        }

		cout << endl; // ends line
	}
    cout << "\n"; // starts a new line

	for (a = 10; a > 0; a--) // for loop starts at 10 and decreases in increments of one until 1 then stops loop
	{
		for (d = 0; d < 10 - a; d++) // for loop dependent on variable a
		{
			cout<< " " << " "; // displays two spaces
		}

		for (b = 1; b <= a; b++) // for loop dependent on variable a
		{
			cout << "*" << " "; // displays *s and spaces
		}

		cout << endl; // ends line
	}
}; // ends function main
//
// Pseudocode
//
// initialize variables
//
//  initialize for loop using variable l starting at 1 and increases in increments of 1 until 10 then stops loop {
//  { initializes second for loop using variable f dependent on initial for loop
//      { displays an * and then a space }
//  new line}
// ends line}
//
// initializes initial for loop using variable c starting at 10 and decreasing in increments of 1 until 1 then stops loop {
//  { initializes second for loop using variable g dependent on initial for loop
//      { displays an * and then a space }
//  new line}
// ends line}
//
// initializes initial for loop using variable j starting at 1 and increasing in increments of 1 until 10 then stops loop {
//  initializes second for loop using variable h dependent to initial for loop
//      { displays two spaces}
//  initializes third for loop using variable i dependent to initial for loop
//      { displays an * and then a space }
//  ends line}
// starts a new line
//
// initializes initial for loop using variable a starting at 10 and decreasing in increments of 1 until 1 then stops loop {
//  initialized second for loop using variable d dependent to initial for loop
//      { displays two spaces}
//  intializes third for loop using variable b dependent to initial for loop
//      { displays * and space}
//  ends line}
