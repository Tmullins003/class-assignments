#include <iostream>

using namespace std;

int main()
{
int n {1};
double sumNeg=0;
double sumpos=0;
double countneg=0;
double countpos=0;
//prompting user
cout<<"Enter pos or neg numbers: \nthe code will end once youve entered 0 \n";
//starting while loop & setting up paremter that if x = 0 then program will stop

while (n != 0)
{
	cin>>n; //allowing input
	if(n<0) //if loop with parameter x< 0 to set up the addition of all negative numbers
        {
            sumNeg+=n; // "sumnegative = sumnegative + n // equation for negative sums
                countneg++; // counter for negative numbers
        }
	else if (n > 0) //else if statement to set up the addition of positive numbers
        {
            sumpos+=n; // sumpositive = sumpositive + n // equation for positive numbers
                countpos++; //counter for negative numbers
        }
}

cout<< "The total of negative numbers = "<< sumNeg<<endl; //output for total negative sums
cout << "number of negative numbers = " << countneg<<endl; // number of neg numbers
cout<< "The average of negative numbers = "<< sumNeg / countneg<<endl; // output for negative avg
cout << "" <<endl;
cout<< "The total of positive nu0mbers = " << sumpos<<endl; // output for total positive sums
cout << "the number of positive numbers = " <<countpos << endl; // number of neg numbers
cout<< "the average of positive numbers = " << sumpos / countpos<<endl; // output for positive avg

}


//pseudo-code
//
// initialize variables and double some of them
//prompt user for neg or pos integers
//create a while loop that wwill be terminated once 0 is inputted
//within while loop have if statement for x is less than 0
      //have sum of neg equation with if statement and counter
      //have sum of pos equation within else if statement and counter
//output sum of neg and sum of pos and how many neg or pos integers there are
//output average
      //calculate average   by dividing sums by counter and have in the second "<<"

