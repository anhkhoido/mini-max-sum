#include <iostream>
#include <algorithm>
#include <new>
#include <valarray>

// The definitive size of the pointer array of positive integers.
#define SIZE 5

void input(long long arr[]);

//
// The main function of the program.
int main() {
    
    // The pointer array that will store the five positive integers.
    long long* arr;
    
    // Allocation of the memory space for the pointer array.
    // If the pointer array is null, then the program will proceed
    // to this function's return statement.
    arr = new (std::nothrow) long long[SIZE];
    if (arr != nullptr) {
        
        input(arr);
        
        // Display the smallest and biggest sums one can obtain by adding
        // a combination of four integers of his/her choice in the array.
        std::cout   << (std::valarray<long long>(arr, SIZE).sum() - arr[4]) << " " 
                    << (std::valarray<long long>(arr, SIZE).sum() - arr[0]) << std::endl;
    } // End of the if statement.
      
    delete [] arr;
    arr = nullptr;
    
    return 0;
}

//
// This function allows the user to input five integers to the array
// that is passed as an argument. The array can only accept positive integers
// inclusively between 1 and 10 to the power of 9.
void input(long long arr[]) {
    
    long long temp;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> temp;
        if (temp >= 1 && temp <= pow(10.0, 9.0)) arr[i] = temp;
        temp = 0;
    }
    
    // Sort the array of positive integers.
    std::sort(arr, arr + SIZE);
}
