#### Realized Volatility Models
#### Close-to-Close  
The close-to-close volatility model estimates the annualized volatility of an asset based on its daily closing prices. It uses the standard deviation of the prices as a measure of dispersion and adjusts it by a factor of ![Equation](https://latex.codecogs.com/png.latex?%5Csqrt%7B%5Cfrac%7Bn%7D%7Bn-1%7D%7D) to account for the bias in sample standard deviation. This adjustment ensures that the volatility measure remains unbiased for small sample sizes. The close-to-close volatility provides a simple way to understand the dispersion of closing prices over a period of time.
- [close-to-close.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/close-to-close.cpp)

#### garman-klass  
The Garman-Klass volatility formula is a widely-used measure of the volatility or risk of a security. It is specifically designed for financial markets where the opening, closing, high, and low prices of a security are available. The formula provides an estimate of the annualized volatility of returns, assuming constant volatility during the trading day.
- [garman-klass.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/garman-klass.cpp)
  
#### parkinson  
The Parkinson volatility model is a range-based estimator that uses only the high and low prices for each period, rather than the closing prices. It assumes that asset prices follow a geometric Brownian motion without drift and that the high and low prices contain more information about volatility than closing prices alone. As a result, it generally provides a more accurate and efficient estimate of volatility, especially when the underlying asset exhibits little drift and there are no overnight price jumps. However, it may underestimate volatility if there are significant jumps or gaps in prices outside the trading session.
- [parkinson.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/parkinson.cpp)
  
 #### rogers-satchell 
 The Rogers-Satchell volatility model is a volatility estimator designed for financial time series data that can capture the volatility of assets in the presence of trends. Unlike the traditional close-to-close volatility estimator, the Rogers-Satchell model uses high, low, open, and close prices, making it more robust when the underlying asset exhibits a drift (i.e., trending markets).
- [rogers-satchell.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/rogers-satchell.cpp)
  
#### yang-zhang  
The Yang-Zhang volatility model estimates historical volatility by combining three components:\
-Overnight return variance: Captures price change from previous close to current open.\
-Open-to-close variance: Measures intraday volatility.\
-Rogers-Satchell estimator: Measures volatility using high, low, open, and close prices, which is robust to drift.\
The model assigns optimized weights to each component (using k), resulting in an estimator that is nearly unbiased and more efficient than previous models, especially when there are jumps between closing and opening prices. The Yang-Zhang estimator is widely used in financial analytics and algorithmic trading.
- [yang-zhang.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/yang-zhang.cpp)

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
