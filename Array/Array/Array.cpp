#include <iostream>
#include <cstdlib> 



void ArrayNum(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 1000; 
    }
}


void Array(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << "Postion: " << &arr[i] << "\nNumber: " << arr[i] << std::endl;
    }
}

int main() {
    const int arraySize = 100;
    int myArray[arraySize];

  
    ArrayNum(myArray, arraySize);

   
    Array(myArray, arraySize);

    return 0;
}
