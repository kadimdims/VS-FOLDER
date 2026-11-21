// ================================================
// ACTIVITY 3A : INPUT VALIDATION WITH WHILE LOOP
// LEARNING OUTCOME: Evaluate while vs do-while for validation
// ================================================

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a positive number: ";
    cin >> number;
    while (number <= 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin >> number;
    }
}