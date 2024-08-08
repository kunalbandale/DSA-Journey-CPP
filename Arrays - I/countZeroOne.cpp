// there is array given you have to count number of zeros and number of 1s in that array 

#include <iostream>
 using namespace std;
 
 int main() {
     int zeroCount = 0;
     int OneCount = 0;
     int arr[5] = {1,1,0,0,1};
     
     for(int i = 0 ; i < 6;i++){
         if(arr[i]==0){
             zeroCount++;
         }
         if(arr[i]==1){
             OneCount++;
         }
     }
     cout << zeroCount << endl;
     cout << OneCount << endl;
     
 }
