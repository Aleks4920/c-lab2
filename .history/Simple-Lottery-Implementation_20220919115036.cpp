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
    
    return 0;
}