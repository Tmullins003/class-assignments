//timothy mullins recursion multiplication by addition
#include <iostream>
#include <iomanip>
using namespace std;

//recursion function for multiplication
int recmult(int x, int y){
    //base condition of recursion
    if (y == 0)
        return 0;
    //call recursive function for multiplication
    if (y > 0)
        return x + recmult(x, y-1);
    //if y is negative
    if (y < 0)
        return -recmult(x,-y);

}




int main(){
    int x,y, sum;

    //input
    cout << "enter 2 numbers to be multiplied" << endl;
    cin >> x >> y;

    //sum function and output
    sum = recmult(x,y);
    cout << "sum is: " << sum << endl;
return 0;
}

//pseudo-code
// int recmult
// int x and int y
// make base condition, y ==0
//      return o
//call recursive function
        // when y is greater than 0
        // return x + recmult ( x, y-1)
        // when y is less than 0 (negative number)
        // return -recmult (x,-y)
//int main
    // int x y and sum
    //ask user to input two integers
    //set sum to equal to recmult(x,y)
    //output sum
//return 0






