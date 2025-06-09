#include <iostream>
#include <format>
#include "bs_model.hpp"

int main() {
    // Sample option data
    const double S = 100.0;         // Spot price
    const double K = 100.0;         // Strike price
    const double r = 0.01;          // Risk-free interest rate
    const double T = 0.5;           // Time to maturity (years)
    const double market_price = 5.87;  // Market price of the call option

    const double iv = bs::implied_volatility(market_price, S, K, r, T);

    std::cout << std::format("Implied Volatility: {:.2f}%", iv * 100) << '\n';
    return 0;
}

