/*
#include <iostream>
 using namespace std;

 int main() {
    // square print 
    /*
    =======
    ****
    ****
    ****
    ****    
    ========
    */
/*
   for(int i = 0 ; i<= 4;i++) {

    for(int j = 0; j <=4;j++) {
        cout << "*";
    }
    cout << endl;
   }
   
    return 0;
 }
 */

#include <iostream>
 using namespace std;

 int main() {

    int num;
    cin >> num ;

   for(int i = 1 ; i<= num;i++) {

    for(int j = 1; j <=num;j++) {
        cout << "*";
    }
    cout << endl;
   }

    return 0;
 }

 