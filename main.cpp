#include <iostream>
#include <array>

/// My library
namespace lib {
    /// Create an empty array
    /**
     * Create an empty array and return it
     */
    template<int N>
    std::array<int, N> numbers() {
        return std::array<int, N>{};
    }
}

int main() {
    auto numbers = lib::numbers<4>();
    std::cout << "Hello\n";
    for ( const auto n : numbers ) {
        std::cout << n << "\n";
    }
    std::cout << std::endl;
    return 0;
}

