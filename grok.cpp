// https://x.com/i/grok/share/998HW7k9dm73BM8BZ89tGRMKb
// Link to Grok's output of an example of advanced C++
// techniques.

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <ranges>

// Template metaprogramming to compute factorial at compile-time
template 
struct Factorial {
    static constexpr unsigned int value = N * Factorial::value;
};

template <>
struct Factorial<0> {
    static constexpr unsigned int value = 1;
};

// Using lambda with capture to modify vector
void modifyVector(std::vector& vec) {
    int sum = 0;
    std::for_each(vec.begin(), vec.end(), [&sum](int& n) {
        sum += n;
        n *= 2;  // Double each number
    });
    std::cout << "Sum of elements: " << sum << std::endl;
}

int main() {
    // Use of unique_ptr for exception safety and RAII
    auto ptr = std::make_unique(Factorial<5>::value);
    std::cout << "Factorial of 5: " << *ptr << std::endl;

    // Lambda expression with capture for modifying and printing
    std::vector numbers = {1, 2, 3, 4, 5};
    modifyVector(numbers);

    // Use of range-based for loop and structured binding
    for (const auto& [index, value] : numbers | std::views::enumerate) {
        std::cout << "Number " << index << ": " << value << std::endl;
    }

    return 0;
}