//timothy Mullins
// die rolling program with arrays instead of switch
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main()
{
//using random number generator
default_random_engine engine(static_cast <unsigned int> (time(0)));
uniform_int_distribution<unsigned int> randomInt(2,12);

const size_t arraySize {13};//ignore elem,element zero
array<unsigned int, arraySize> frequency{};//int to 0s

//roll 2 die 36,000,000 times
for (unsigned int roll {2}; roll <= 36000000; ++roll){
    ++frequency[randomInt(engine)];
}
cout << "face" << setw(13) << "frequency" << endl;

//output each arrays value
for (size_t face {2}; face < frequency.size(); ++face){
    cout << setw(4) << face << setw(13) << frequency [face] << endl;
}
}
//pseudo-code
// include iomanip, array, random, ctime
//int main
    //int random number generator from library and static cast unsigned int time
    //unsigned int randomInt 2-12

    //make array size const at 13
    //array frequency to count die occurrences

    //roll die function, roll 36,000,000 times
        //counter that replaces switch statements
    //for loop to output array values










