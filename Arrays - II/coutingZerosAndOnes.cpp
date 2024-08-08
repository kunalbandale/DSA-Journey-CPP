#include <iostream>
 using namespace std;


 void sortZerOne(int arr[],int size){
    int zeroCount = 0;
    int oneCount = 0;
   // counting

    for(int i = 0 ; i < size ; i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }

    // insertion
    for(int i = 0 ; i < zeroCount ; i++){
        arr[i] = 0;
    }
    for(int i = zeroCount ; i < size ; i++){
        arr[i] = 1;
    }
 }

 int main() {
    int arr[] = {0,1,1,1,1,0};
    int size = 6;

    sortZerOne(arr,size);

    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }

    return 0;
 }