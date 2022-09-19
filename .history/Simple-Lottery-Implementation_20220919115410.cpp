// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;
  
// Driver Code
int main()
{

    // get 7 numbers from user input
    int userNumbers[7];
    for (int i = 0; i < 7; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> userNumbers[i];
    }
    // compare numbers to 7 random numbers 
    int randomNumbers[7];
    for (int i = 0; i < 7; i++) {
        randomNumbers[i] = rand() % 10;
    }
    // print out the random numbers
    cout << "The random numbers are: ";
    for (int i = 0; i < 7; i++) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;
    // print out the user numbers
    cout << "The user numbers are: ";
    for (int i = 0; i < 7; i++) {
        cout << userNumbers[i] << " ";
    }
    cout << endl;
    // compare the numbers
    int matches = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (userNumbers[i] == randomNumbers[j]) {
                matches++;
            }
        }
    }
    
}