### Realized Volatility Estimation Models
#### Close-to-Close volatility model
The close-to-close volatility model estimates the annualized volatility of an asset based on its daily closing prices. It uses the standard deviation of the prices as a measure of dispersion and adjusts it by a factor of ![Equation](https://latex.codecogs.com/png.latex?%5Csqrt%7B%5Cfrac%7Bn%7D%7Bn-1%7D%7D) to account for the bias in sample standard deviation. This adjustment ensures that the volatility measure remains unbiased for small sample sizes.

- [close-to-close.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/close-to-close.cpp)

###### Close-to-close volatility model project structure
  close_to_close_volatility/\
├── src/\
│   ├── [main.cpp](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/src/main.cpp)\
│   │   ├── [close_to_close.cpp](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/src/volatility/close_to_close.cpp)\
├── include/\
│       └── [close_to_close.hpp](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/include/volatility/close_to_close.hpp)\
└── [CMakeLists.txt](https://github.com/manuelmusngi/derivatives_models_for_options/blob/main/CMakeLists.txt)

#### garman-klass volatility model
The Garman-Klass volatility formula is a widely-used measure of the volatility or risk of a security. It is specifically designed for financial markets where the opening, closing, high, and low prices of a security are available. The formula provides an estimate of the annualized volatility of returns, assuming constant volatility during the trading day
- [garman-klass.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/garman-klass.cpp)
  
#### parkinson volatility model
The Parkinson volatility model is a range-based estimator that uses only the high and low prices for each period, rather than the closing prices. It assumes that asset prices follow a geometric Brownian motion without drift and that the high and low prices contain more information about volatility than closing prices alone. As a result, it generally provides a more accurate and efficient estimate of volatility, especially when the underlying asset exhibits little drift and there are no overnight price jumps. However, it may underestimate volatility if there are significant jumps or gaps in prices outside the trading session.
- [parkinson.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/parkinson.cpp)
  
 #### rogers-satchell volatility model 
- [rogers-satchell.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/rogers-satchell.cpp)
  
#### yang-zhang volatility model
- [yang-zhang.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/realized-volatility-models/yang-zhang.cpp)

### Option Sensitivities with Black-Scholes Model 
- [BlackScholesModel.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/option-sensitivities/BlackScholesModel.cpp)
- [BlackScholesModel.h](https://github.com/manuelmusngi/derivatives-modeling/blob/main/option-sensitivities/BlackScholesModel.h)
     
### Options Implied Volatility Surface 
- [OptionsImpliedVolatilitySurface.h](https://github.com/manuelmusngi/derivatives-modeling/blob/main/IVSurface/OptionsImpliedVolatilitySurface.hpp)
- [OptionsImpliedVolatilitySurface.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/IVSurface/OptionsImpliedVolatilitySurface.cpp)
- [main.cpp](https://github.com/manuelmusngi/derivatives-modeling/blob/main/IVSurface/main.cpp)
       
### License
This project is licensed under the [MIT License](https://github.com/manuelmusngi/regime_switching_models/edit/main/LICENSE).
