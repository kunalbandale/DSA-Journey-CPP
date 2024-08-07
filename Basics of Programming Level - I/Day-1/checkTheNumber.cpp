// Write a program to check if a number entered by the user is between 10 and 50.

#include <iostream>
 using namespace std;
 
 int main() {

    int number;
    cout << "Enter a Number:" << endl;
    cin >> number;

    if(number >= 10 && number <= 50) {
        cout << "Number is Between 10 to 50";
    } else {
        cout << "Please enter a number between 10 to 50" << endl;
    }

    return 0;

 } 
  
    