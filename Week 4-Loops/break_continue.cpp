// ================================================
// ACTIVITY 2 : BREAK AND CONTINUE IN LOOPS
// LEARNING OUTCOME: ANALYSE BREAK AND CONTINUE STATEMENTS IN LOOPS
// ================================================

#include <iostream>
using namespace std;
int main(){
    cout << "Number filter : Skip multiples of 3 and stop at 15"<< endl;

    // Start a loo for 1 to 20
    // Part 1: int i = 1; // Start counting from 1
    // Part 2: i <= 20; // loop while 1 is 20 or less
    // Part 3: i++ // increase i by 1 after each iteration

    for(int i = 1; i <= 20; i++){
        if(i== 15){
            cout << "Breaking at" << i << endl;
            break;
        }
            // Check 2 : If it is divisible by 3, skip it
            // The % operator gives the remainder of a division
            // If i% 3 == 0, the i is a multiple of 3
            if (i % 3 == 0){
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
    
    return 0;
}