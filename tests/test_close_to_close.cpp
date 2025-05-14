#include "volatility/close_to_close.hpp"
#include <cassert>
#include <iostream>

void testCalculateCloseToCloseVolatility() {
    // Test case 1: Normal dataset
    std::vector<double> prices = {10.5, 11.2, 12.8, 10.9, 9.5};
    double result = volatility::calculateCloseToCloseVolatility(prices);
    assert(result > 0); // Basic test to ensure result is positive

    // Test case 2: Single price (should throw exception)
    try {
        std::vector<double> singlePrice = {10.5};
        volatility::calculateCloseToCloseVolatility(singlePrice);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument&) {
        assert(true); // Exception is expected
    }

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    testCalculateCloseToCloseVolatility();
    return 0;
}
