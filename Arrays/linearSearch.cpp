#include <iostream>
 using namespace std;
 
 
 bool checkTarget(int arr[] , int size , int target){
     for(int i = 0 ; i < size ; i++){
         if(arr[i]==target){
             return true;
         }
     }
     return false;
 }
 
 int main() {
     
     int arr[6] = {2,54,1,33,3,9}; ; 
     int size , target ;
     
     size = 6;
     target = 100;
     
     bool ans = checkTarget(arr,size,target);
     cout << ans << endl;

     
     return 0;
 }