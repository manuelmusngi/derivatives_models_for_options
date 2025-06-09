#pragma once

#include <cmath>
#include <numbers>
#include <algorithm>

namespace bs {

    constexpr double norm_pdf(double x) {
        constexpr double inv_sqrt_2pi = 1.0 / std::sqrt(2 * std::numbers::pi);
        return inv_sqrt_2pi * std::exp(-0.5 * x * x);
    }

    constexpr double norm_cdf(double x) {
        return 0.5 * std::erfc(-x / std::sqrt(2));
    }

    constexpr double call_price(double S, double K, double r, double T, double sigma) {
        if (sigma <= 0.0 || T <= 0.0) return 0.0;
        const double sqrtT = std::sqrt(T);
        const double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrtT);
        const double d2 = d1 - sigma * sqrtT;
        return S * norm_cdf(d1) - K * std::exp(-r * T) * norm_cdf(d2);
    }

    constexpr double vega(double S, double K, double r, double T, double sigma) {
        const double sqrtT = std::sqrt(T);
        const double d1 = (std::log(S / K) + (r + 0.5 * sigma * sigma) * T) / (sigma * sqrtT);
        return S * sqrtT * norm_pdf(d1);
    }

    double implied_volatility(
        double market_price,
        double S, double K,
        double r, double T,
        double initial_vol = 0.2,
        double tol = 1e-6,
        int max_iter = 100
    ) {
        double sigma = initial_vol;

        for (int i = 0; i < max_iter; ++i) {
            const double price = call_price(S, K, r, T, sigma);
            const double v = vega(S, K, r, T, sigma);
            if (v < 1e-8) break;

            const double diff = price - market_price;
            if (std::abs(diff) < tol) return sigma;

            sigma -= diff / v;
            sigma = std::clamp(sigma, 1e-6, 5.0);  // prevent negative or runaway vol
        }

        return sigma; // fallback if convergence fails
    }

}  // namespace bs

