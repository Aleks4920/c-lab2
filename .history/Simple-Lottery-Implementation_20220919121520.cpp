// C++ program to demonstrate the
// boilerplate code
#include <iostream>
using namespace std;
  
// Driver Code
int main()
{

    // get 7 numbers from user input
    int num1, num2, num3, num4, num5, num6, num7;


    cout << "Enter 7 numbers: ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;
        if (num1 => 50 || num2 => 50 || num3 => 50 || num4 => 50 || num5 => 50 || num6 => 50 || num7 => 50)
        {
            cout << "Invalid input. Please enter a number between 1 and 50.";
        }
        else
        {
            cout << "You entered: " << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " " << num6 << " " << num7 << endl;
        }
    
    // genrate 7 digit numbers 
    int lottery1 = rand() % 50 + 1;
    int lottery2 = rand() % 50 + 1;
    int lottery3 = rand() % 50 + 1;
    int lottery4 = rand() % 50 + 1;
    int lottery5 = rand() % 50 + 1;
    int lottery6 = rand() % 50 + 1;
    int lottery7 = rand() % 50 + 1;

    cout << "The lottery numbers are: " << lottery1 << " " << lottery2 << " " << lottery3 << " " << lottery4 << " " << lottery5 << " " << lottery6 << " " << lottery7 << endl;




}