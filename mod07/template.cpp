#include <iostream>

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
 
    std::cout << max(3, 5) << std::endl;         // Works with int
    std::cout << max(2.5, 4.8) << std::endl; // Works with double
    return 0;
}