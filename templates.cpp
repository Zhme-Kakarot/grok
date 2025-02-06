// TODO: Add grok link
// Perhaps work with more type examples

#include <iostream>


template <typename T>
T max(T a, T b) {

    return (a > b) ? a : b;
}

int main() {
    // Implement for int, float, and T

    // Int
    std::cout << "The maximum value between 3 and 7 is: " << max(3, 7) << std::endl;
    
    // Double
    std::cout << "The maximum value between 6.1 and 14.3 is: " << max(14.3, 6.1) << std::endl;
    
    // Custom type T
    struct max_tester {
        int value;
        max_tester(int v) : value(v) {}
        bool operator>(const max_tester& rhs) const {
            return value > rhs.value;
        }
    };
    max_tester a(9), b(21);
    std::cout << "The maximum value between 9 and 21 is: " << max(a, b).value << std::endl;
}
