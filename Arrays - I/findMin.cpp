#include<iostream>
#include<climits>
 using namespace std;


int findMax(int arr[] , int size){
    int maxAns = INT_MIN;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] > maxAns){
            maxAns = arr[i];
        }
    }
    
        return maxAns;

}

int findMin(int arr[] , int size){
    int minAns = INT_MAX;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    
        return minAns;

}

 int main() {
    int arr[100];
    int size;

    cout << "Enter the number of Elements:";
    cin >> size;

    for(int i = 0 ; i<size;i++){
        cout << "Enter Element" << i << endl;
        cin >> arr[i];
    }

    cout << "Max Number is:" << findMax(arr,size);
    
    cout << "Min Number is:" << findMin(arr,size);
    
    return 0;
 }