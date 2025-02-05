// Grok gives a nice explanation and BigO insights
// https://x.com/i/grok/share/BfiMscGOI9qPVoxfTHbA3zsTQ

#include <iostream>


// Base Fibonacci compile-time
template<int n>
struct Fibonacci {
    static constexpr int value = Fibonacci<n - 1>::value + Fibonacci<n - 2>::value;
};

// Base case 0
template<>
struct Fibonacci<0> {
    static constexpr int value = 0;
};

// Base case 1
template<>
struct Fibonacci<1> {
    static constexpr int value = 1;
};


int main() {
    // Compile-time calculation
    constexpr int fib5 = Fibonacci<5>::value;
    constexpr int fib10 = Fibonacci<10>::value;
    constexpr int fibn = Fibonacci<27>::value;

    std::cout << "Fibonacci to 5 is: " << fib5 << std::endl;
    std::cout << "Fibonacci to 10 is: " << fib10 << std::endl;
    std::cout << "Fibonacci to 27 is: " << fibn << std::endl;

    return 0;
}