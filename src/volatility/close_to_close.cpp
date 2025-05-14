#include "volatility/close_to_close.hpp"
#include <cmath>
#include <stdexcept>

namespace volatility {

    double calculateStandardDeviation(const std::vector<double>& prices) {
        if (prices.empty()) {
            throw std::invalid_argument("Prices vector cannot be empty.");
        }

        double sum = 0.0, mean, variance = 0.0;

        // Calculate Mean
        for (const auto& price : prices) {
            sum += price;
        }
        mean = sum / prices.size();

        // Calculate Variance
        for (const auto& price : prices) {
            variance += std::pow(price - mean, 2);
        }
        variance /= prices.size();

        // Calculate Standard Deviation
        return std::sqrt(variance);
    }

    double calculateCloseToCloseVolatility(const std::vector<double>& prices) {
        if (prices.size() <= 1) {
            throw std::invalid_argument("At least two prices are required.");
        }

        double stdDev = calculateStandardDeviation(prices);

        // Apply the close-to-close volatility formula
        return stdDev * std::sqrt(static_cast<double>(prices.size()) / (prices.size() - 1));
    }

} // namespace volatility
