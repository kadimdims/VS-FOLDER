//================================
//ACTIVITY 1: PASS-BY-VALUE
//================================

#include <iostream>
using namespace std;

void swapByValue(int a, int b){

    cout << "inside function - before swap: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;

    cout << "inside function - afterx    swap: a = " << a << ", b = " << b << endl;

}
int main() {
        int x = 10;
        int y = 20;

        cout << "Before callingswapByValue:" << endl;
        cout << "x = " << x << ", y = " << y << endl;

        swapByValue(x, y);

        cout << "After calling swapByValue:" << endl;
        cout << "x = " << x << ", y = " << y << endl;

        cout << "/nExplanation: The function receiverd COPIES of x and y." << endl;
        cout << "Changes made inside the function do not affect the originals." << endl;
    
        return 0;



}