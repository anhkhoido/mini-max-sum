#include <iostream>
#include <algorithm>
#include <new>
#include <valarray>

#define SIZE 5

void input(long long arr[]);

int main() {
    
    long long* arr;
    
    arr = new (std::nothrow) long long[SIZE];
    if (arr != nullptr) {
        
        input(arr);
        std::sort(arr, arr + SIZE);
        std::cout   << (std::valarray<long long>(arr, SIZE).sum() - arr[4]) << " " 
                    << (std::valarray<long long>(arr, SIZE).sum() - arr[0]) << std::endl;
    }
    
    
    delete [] arr;
    arr = nullptr;
    
    return 0;
}

void input(long long arr[]) {
    
    long long temp;
    for (int i = 0; i < SIZE; i++) {
        std::cin >> temp;
        if (temp >= 1 && temp <= pow(10.0, 9.0)) arr[i] = temp;
        temp = 0;
    }
}
