#ifndef CLOSE_TO_CLOSE_HPP
#define CLOSE_TO_CLOSE_HPP

#include <vector>

namespace volatility {

    // Function to calculate the standard deviation of prices
    double calculateStandardDeviation(const std::vector<double>& prices);

    // Function to calculate close-to-close volatility
    double calculateCloseToCloseVolatility(const std::vector<double>& prices);

} // namespace volatility

#endif // CLOSE_TO_CLOSE_HPP
