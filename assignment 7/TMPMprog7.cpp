//timothy Mullins
//project 7 roll dice simulation and counter for face values 2-12
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main () {
    srand(static_cast<unsigned int> (time(0)));
    unsigned int frequency2 {0}; //from here down till line 17 expresses number of 2-12s rolled
    unsigned int frequency3 {0};
    unsigned int frequency4 {0};
    unsigned int frequency5 {0};
    unsigned int frequency6 {0};
    unsigned int frequency7 {0};
    unsigned int frequency8 {0};
    unsigned int frequency9 {0};
    unsigned int frequency10 {0};
    unsigned int frequency11 {0};
    unsigned int frequency12 {0};


    for(unsigned int roll {1}; roll <= 110000; ++roll){
        int dice1 = 1 + rand() % 6; // 1st random die roll
        int dice2 = 1 + rand() % 6; // 2nd random die roll
        int sum = dice1 + dice2;

    switch (sum) {
    case 2:
        ++frequency2;
        break;
    case 3:
        ++frequency3;
        break;
    case 4:
        ++frequency4;
        break;
    case 5:
        ++frequency5;
        break;
    case 6:
        ++frequency6;
        break;
    case 7:
        ++frequency7;
        break;
    case 8:
        ++frequency8;
        break;
    case 9:
        ++frequency9;
        break;
    case 10:
        ++frequency10;
        break;
    case 11:
        ++frequency11;
        break;
    case 12:
        ++frequency12;
        break;

    }
    }

    cout << "face"<<setw(13)<< "frequency" << endl;
    cout << "   2"<<setw(13)<<frequency2;
    cout << "\n   3"<<setw(13)<<frequency3;
    cout << "\n   4"<<setw(13)<<frequency4;
    cout << "\n   5"<<setw(13)<<frequency5;
    cout << "\n   6"<<setw(13)<<frequency6;
    cout << "\n   7"<<setw(13)<<frequency7;
    cout << "\n   8"<<setw(13)<<frequency8;
    cout << "\n   9"<<setw(13)<<frequency9;
    cout << "\n  10"<<setw(13)<<frequency10;
    cout << "\n  11"<<setw(13)<<frequency11;
    cout << "\n  12"<<setw(13)<<frequency12<<endl;

    }

// pseudo-code
//  initialize variables frequency2 - frequency12
//  set rand based on time
//  for loop starting at 1 until 110000 while increasing in integers of 1
//      have dice1 equal to 1 plus rand % 6
//      have dice2 equal to 1 plus rand % 6
//      have sum = dice1 + dice2
//
//          switch statement based on variable sum
//
//          case statements 2-12 based of the value of the variable sum
//              increase sum2-sum12 dependent on which case in increments of 1
//              break at the end of the 11 different cases
// set up a table with face and frequency as header
//      have numbers 2-12 be under face and display frequency2-12 under frequency
