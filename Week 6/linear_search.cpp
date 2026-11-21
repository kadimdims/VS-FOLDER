#include <iostream>
int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target
        }
    }
    return -1; // Return -1 if the target is not found
}
int main() {
    int number[8] = {15, 42, 7, 89, 23, 56, 11, 74};
    int size = sizeof(number) / sizeof(number[0]);
    int target;
    std::cout << "Array contents: ";
    for (int i = 0; i < size; i++){
        std::cout << number[i] << " ";
    }
    std::cout << std::endl;
    std ::cout << "Enter a number to search: ";
    std::cin >> target;
    int position = linearsearch(number, size, target);
    if (position != -1) {
        std::cout << "Element found at index: " << position << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
    return 0;
}