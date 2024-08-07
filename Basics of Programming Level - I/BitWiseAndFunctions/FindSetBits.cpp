#include <iostream>
 using namespace std;
 
 int main() {
     int n = 4;
     int setBitCount;
     
     while(n!=0){
         int lastBit = (n&1);
         if(lastBit == 1){
             setBitCount = setBitCount+1;
         }
         n = n >> 1;
         
     }
 cout << setBitCount;
     
     
     
     return 0;
 }