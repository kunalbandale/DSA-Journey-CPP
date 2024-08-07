 #include<iostream>
  using namespace std;

  void fullPyramid(int n){
    for(int row = 0; row < n ; row++){
        for(int col = 0 ; col < n - row - 1 ; col++){
            cout << " ";
        }
        for(int col = 0 ; col < row + 1 ; col++){
            cout << "* ";
        }
        cout << endl;
    }
  }
  
  void invertPy(int n){
      
    for(int row = 0; row < n; row++){
        for(int col = 0; col < row; col++){
            cout << " ";
        }

        for(int col = 0; col < n - row; col++){
            cout << "* ";
        }
        cout << endl;
    }

      
  }

  int main() {
    int n;
    cin >> n;

    fullPyramid(n);
    invertPy(n);

    return 0;
  }