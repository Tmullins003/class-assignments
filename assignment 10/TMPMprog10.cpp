//timothy mullins
// prof. kovach
//object oriented programing;C++
#include <iostream>
#include<conio.h>
#include <array>

using namespace std;

void OrderPointer(int&, int&, int&); //prototyping function orderpointer
void OrderArray(array <int, 3> &array1);//prototyping function orderarray

int main()
{
int x = 0; //intializing x y and z to zero
int y = 0;
int z = 0;

cout << " Enter Three Digits My Good Sir" << endl;
cin >> x >> y >> z;

OrderPointer(x,y,z); //calling pointer function

array < int, 3> array1 = {x,y,z};//creating array1's elements
OrderArray(array1); //calling array function

cout << "Numbers In ASC order by Pointer: \n" << x <<"," << y <<"," << z <<endl;
cout << "Numbers in ASC order by Array: \n";
    for (int a = 0; a < 3; a++){
        cout <<array1[a]<< ",";
    }


_getch();
return 0;
}

//OrderPointer function
void OrderPointer (int &x, int &y, int &z) {
int bars;

if (x > y){
    bars = x;
    x = y;
    y = bars;
}
if (x > z) {
    bars = x;
    x = z;
    z = bars;
}
if (y > z){
    bars = y;
    y = z;
    z = bars;
}
}

//OrderArray Function
void OrderArray ( array<int, 3> &array1){
OrderPointer(array1[0], array1[1],array1[2] );
}

//pseudo-code
// int main function
//  intialize variables x y z to zero
//  cout for users input
//  cin x y z
//  call for pointer/array function
// int array for 3 elements and name it something along the lines of array#
// have the array equal to {x,y,z}
// call array function
// cout users input for point function by x y z
// for array function start a for loop ( int a; a < 3; a++)
// then cout << array#[a] << " "
// _getch and return 0
//
// void pointer
// int &x,&y,&z in parameter
//int variable
// have 3 if statements
// where variable, x , y, z in which all three will equal to each other once through the 3 variables
            // if ( x > z && x > y && y > z)
                // bars = x && bars = y && bars = z
                // x = bars && y = x && bars = y
                // y = bars && y = z && bars = z
                // z = bars && z= x && bars = z

//void array
// array in parameters with a limit of 3 elements and &array#
// call pointer function and within its parameters array#[0-2]
