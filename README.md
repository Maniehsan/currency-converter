# Currency Converter

A C++ console-based currency converter that allows users to convert between major global currencies. This interactive tool supports conversions among US Dollar (USD), Pakistani Rupee (PKR), Euro (EUR), and British Pound (GBP) using predefined exchange rates.

## Features

- Convert between USD, PKR, EUR, and GBP
- User-friendly text interface
- Looping option to perform multiple conversions
- Input validation for currency type and amount

## How It Works

1. Choose the base currency (USD, PKR, EUR, or GBP).
2. Select the target currency to convert to.
3. Enter the amount you want to convert.
4. Get the converted result instantly.

## Exchange Rates Used

- 1 USD = 279.78 PKR, 0.92 EUR, 0.79 GBP  
- 1 PKR = 0.0036 USD, 0.0033 EUR, 0.0028 GBP  
- 1 EUR = 304.82 PKR, 1.09 USD, 0.86 GBP  
- 1 GBP = 356.19 PKR, 1.27 USD, 1.17 EUR  

> ⚠️ Note: These rates are static and hardcoded. They do not reflect real-time market values.

## How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/currency-converter.git 
   ```
2. Navigate to the project directory and compile:
   ```bash
   g++ -o converter currency_converter.cpp
   ./converter
   ```
## License
  
  This project is licensed under the MIT License. See the LICENSE file for details.
