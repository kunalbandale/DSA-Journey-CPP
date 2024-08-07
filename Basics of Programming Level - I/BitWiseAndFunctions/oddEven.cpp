// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void findOddEven(int n){
    if(n&1){
        cout << "Number is Odd" << endl;
    } else {
        cout << "Number is Even" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
findOddEven(n);
    return 0;
}