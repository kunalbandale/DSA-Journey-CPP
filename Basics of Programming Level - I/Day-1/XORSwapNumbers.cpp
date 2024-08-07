// #include<iostream>
//  using namespace std;

//  int main() {

//     int x = 453 , y = 24;

//     cout << "After Swapping" << endl;
//     cout << x << " " << y << endl;


//     x = x + y ; // x is 477
//     y = x - y; // y is 453
//     x = x - y; // y is 24 

//     cout << "After Swapping" << endl;
//     cout << x << " " << y << endl;




//     return 0;
//  }

#include <iostream>
 using namespace std;

 int main() {
    int x = 10 , y = 20;

    cout << x << " " << y << endl;

    x = x^y;
    y = x^y;
    x = x^y;

    cout << x << " " << y <<endl;



    return 0;
 }