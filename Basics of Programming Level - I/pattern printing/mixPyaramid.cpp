#include <iostream>
 using namespace std;

int main() {
    int n;
    cin >> n;
    
    // PART-I
    
    for(int row =0; row <n;row++){
        // for stars 1
        
        for(int col = 0 ; col < n-row ; col++){
            cout << "*";
        }
        
        // for spaces 2
        
        for(int col = 0 ; col < 2 * row + 1 ; col++){
            cout << " ";
        }
        
        // for stars 2
        
        for(int col = 0 ; col < n-row ; col++){
            cout << "*";
        }
        cout << endl;
    }
    
       // PART-II
    
    for(int row =0; row <n;row++){
        // for stars 1
        
        for(int col = 0 ; col < row+1 ; col++){
            cout << "*";
        }
        
        // for spaces 2
        
        for(int col = 0 ; col < 2 * (n - row) - 1 ; col++){
            cout << " ";
        }
        
        // for stars 2
        
        for(int col = 0 ; col <row+1 ; col++){
            cout << "*";
        }
        cout << endl;
    }
  
  

    return 0;
}