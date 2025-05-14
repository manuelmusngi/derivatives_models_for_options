#include "volatility/close_to_close.hpp"
#include <iostream>
#include <vector>

int main() {
    try {
        // Example dataset of closing prices
        std::vector<double> prices = {10.5, 11.2, 12.8, 10.9, 9.5};

        // Calculate close-to-close volatility
        double volatility = volatility::calculateCloseToCloseVolatility(prices);

        // Output the result
        std::cout << "Close-to-Close Volatility: " << volatility << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
