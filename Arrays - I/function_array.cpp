#include<iostream>
 using namespace std;


 void print(int arr[], int size){
     for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
     }
 }
 
 int main() {

    int arr[] = {3,2,1,5,3};
    int size = 5;

    print(arr,size);



    return 0;
 }