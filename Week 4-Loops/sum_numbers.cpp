//================================================
// ACTIVITY 1: SUM OF FIRST N NATURAL NUMBERS
//================================================
// LEARNING OUTCOME: APPLY A LOOP TO ITERATE OVER A RANGE

#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout << "Enter a positive number(N): ";
    cin >> n;

    // Star for a loop  with three parts seperted by semicolons:
    // Part 1 : int i = 1; //initialization: start counting from 1
    // Part 2 : i <= n; //condition: continue until i is less than
    // Part 3 : i++ //increment: increase i by 1 after each iteration

    for (int i = 1; i <= n; i++) {
        sum += i;

    }
    cout << "The sum of numbers 1 to " << n << " is: " << sum << endl;

    return 0;
}