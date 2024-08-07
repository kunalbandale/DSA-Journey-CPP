#include <iostream>
 using namespace std;

 int main() {
    int a;
    cin >> a;

    if(a>0) {
        cout << "Positive Number" << endl;
    } else if(a < 0) {
        cout << "Negative Number" << endl;
    } else {
        cout << "Zero" << endl;
    }
  

    return 0;
 }