#include <iostream>
using namespace std;

void checkBudgetToBuyCar(int budget) {
    if(budget >= 120000) {
        cout << "You can buy a Mercedes" << endl;
    } else {
        cout << "You can't buy a Mercedes" << endl;
    }
}

int main() {
    int budget;
    cout << "Enter your budget: ";
    cin >> budget;

    checkBudgetToBuyCar(budget);

    return 0;
}
