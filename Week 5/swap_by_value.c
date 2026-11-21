// ACTIVITY 1: PASS-BY-VALUE - THE SWAP THAT DOESN'T SWAP (C VERSION)
#include <stdio.h>

void swapbyvalue(int a, int b) {
    printf("inside function - before swap: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;

    printf("inside function - after swap: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10;
    int y = 20;
    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    swapbyvalue(x, y);

    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("\nExplanation: The function received COPIES of x and y.\n");
    printf("Changes made inside the function do not affect the originals.\n");

    return 0;
}