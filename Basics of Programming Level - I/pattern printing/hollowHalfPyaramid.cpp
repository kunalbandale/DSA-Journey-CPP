#include<iostream>
 using namespace std;

 int main() {
    for(int row = 0 ; row < 5; row++) {
        for(int col = 0 ; col < row+1;col++){
            if (col == 0 || col == row || row == 4){
                row+1;
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    


    return 0;
 }