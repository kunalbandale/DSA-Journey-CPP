#include <iostream>
 using namespace std;

void extremePrinting(int arr[] , int n){
    int i = 0;
    int j = n-1;

    while(i < j){
        cout << arr[i] << " ";
        i++;
        cout << arr[j] << " ";
        j++;

    }
}
 



 int main() {
    int arr[4] = {10,20,30,40};
    int size = 4;
    extremePrinting(arr,size);

    return 0;
 }