#### Realized Volatility Models
#### close-to-close 

- [close-to-close.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/close-to-close.cpp)

The close-to-close volatility model estimates the annualized volatility of an asset based on its daily closing prices. It uses the standard deviation of the prices as a measure of dispersion and adjusts it by a factor of ![Equation](https://latex.codecogs.com/png.latex?%5Csqrt%7B%5Cfrac%7Bn%7D%7Bn-1%7D%7D) to account for the bias in sample standard deviation. This adjustment ensures that the volatility measure remains unbiased for small sample sizes. The close-to-close volatility provides a simple way to understand the dispersion of closing prices over a period of time.

The daily variance estimate is:

Let \( P_t \) be the closing price on day \( t \). The log return is:

$$
r_t = \ln\left(\frac{P_t}{P_{t-1}}\right)
$$

The mean log return over \( N \) days is:

$$
\bar{r} = \frac{1}{N} \sum_{t=1}^{N} r_t
$$

Then, the close-to-close realized volatility is:

$$
\sigma_{\text{realized}} = \sqrt{\frac{1}{N - 1} \sum_{t=1}^{N} \left( r_t - \bar{r} \right)^2}
$$

To annualize the volatility (assuming 252 trading days per year):

$$
\sigma_{\text{annual}} = \sigma_{\text{realized}} \times \sqrt{252}
$$



#### garman-klass  

- [garman-klass.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/garman-klass.cpp)

The Garman-Klass volatility formula is a widely-used measure of the volatility or risk of a security. It is specifically designed for financial markets where the opening, closing, high, and low prices of a security are available. The formula provides an estimate of the annualized volatility of returns, assuming constant volatility during the trading day.

Let:

𝑂
 = opening price

𝐻
 = high price

𝐿
 = low price

𝐶
 = closing price

Define:

ln
⁡
(
𝑥
)
 = natural logarithm of 
𝑥

𝜎
2
 = estimated variance of log returns

The daily variance estimate is:

$$
\sigma^2 = 0.5 \left( \ln\left(\frac{H}{L} \right) \right)^2 - \left(2 \ln(2) - 1 \right) \left( \ln\left( \frac{C}{O} \right) \right)^2
$$

$$
\sigma_{\text{annual}} = \sqrt{N \cdot \sigma^2}
$$

#### parkinson 

- [parkinson.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/parkinson.cpp)

The Parkinson volatility model is a range-based estimator that uses only the high and low prices for each period, rather than the closing prices. It assumes that asset prices follow a geometric Brownian motion without drift and that the high and low prices contain more information about volatility than closing prices alone. As a result, it generally provides a more accurate and efficient estimate of volatility, especially when the underlying asset exhibits little drift and there are no overnight price jumps. However, it may underestimate volatility if there are significant jumps or gaps in prices outside the trading session.

  
 #### rogers-satchell

- [rogers-satchell.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/rogers-satchell.cpp)
 
 The Rogers-Satchell volatility model is a volatility estimator designed for financial time series data that can capture the volatility of assets in the presence of trends. Unlike the traditional close-to-close volatility estimator, the Rogers-Satchell model uses high, low, open, and close prices, making it more robust when the underlying asset exhibits a drift (i.e., trending markets).

  
#### yang-zhang 

- [yang-zhang.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/yang-zhang.cpp)

The Yang-Zhang volatility model estimates historical volatility by combining three components:\
-Overnight return variance: Captures price change from previous close to current open.\
-Open-to-close variance: Measures intraday volatility.\
-Rogers-Satchell estimator: Measures volatility using high, low, open, and close prices, which is robust to drift.\
The model assigns optimized weights to each component (using k), resulting in an estimator that is nearly unbiased and more efficient than previous models, especially when there are jumps between closing and opening prices. The Yang-Zhang estimator is widely used in financial analytics and algorithmic trading.


#### Implied Volatility Model

#### Black-Scholes
black_scholes_cpp20/\
├── [CMakeLists.txt](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/directory_structure/CMakeLists.txt )\
├── [bs_model.hpp](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/directory_structure/bs_model.hpp)\
├── [main.cpp](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/directory_structure/main.cpp)
    
#### References
- [Overnight GARCH-Itô Volatility Models](https://arxiv.org/abs/2102.13467)
- [The Garman-Klass volatility estimator revisited](https://arxiv.org/abs/0807.3492)
- [Rough volatility: evidence from range volatility estimators](https://arxiv.org/abs/2312.01426)
       
#### License
This project is licensed under the [MIT License](https://github.com/manuelmusngi/regime_switching_models/edit/main/LICENSE).
