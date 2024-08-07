#include <iostream>
 using namespace std;

 int main() {
    float Total = 500;
    float sub1 , sub2 , sub3 , sub4 , sub5;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    
    float subjectTotal = sub1+sub2+sub3+sub4+sub5;


    cout << "Subject Total: " << subjectTotal << endl;
    cout << "Percentage: " << ((subjectTotal / Total) * 100) << endl;


    return 0;
 }