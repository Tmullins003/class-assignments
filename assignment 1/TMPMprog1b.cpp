// timothy mullins, csc-141A, 9/6/2017
// Fig. 2.5: fig02_05.cpp
// addition program that displays the sum of two integers

#include <iostream> // enables program to perform input and output

// function main begins program execution
int main(){
    // declaring and intializing variables
    int number1 {0}; // 1st integer to add
    int number2 {0};// 2nd integer to add
    int number3 {0};// 3rd integer to add
    int sum {0}; // sum of 1 and 2

    std::cout << "enter first integer \n"; //prompt user for data
    std::cin >> number1; //read first integer from user #1

    std::cout << "enter second integer \n"; //prompt user for data
    std::cin >> number2; //read first integer from user #1

    std::cout << "enter third integer \n"; //prompt user for data
    std::cin >> number3; //read first integer from user #1

    sum = number1 + number2 + number3; // add the number stores the results

    std :: cout << "sum is \n" <<sum <<std:: endl; // display sum; end line
} // end function main

