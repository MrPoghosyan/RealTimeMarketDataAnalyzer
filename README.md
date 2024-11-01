# RealTimeMarketDataAnalyzer
# Real-Time Market Data Collection and Analysis System

This project simulates a system for real-time market data collection and analysis. It generates random tick data (price and volume) and stores it in a CSV file for analysis.

## Objectives

- **Data Simulation**: Generate random price and volume for market data.
- **Data Storage**: Save generated data to a CSV file.
- **Data Analysis**: Calculate average values for price and volume.
- **Multithreading**: Simulate real-time data collection using threads.

## Key Technologies

- **C++**: Core language for implementation.
- **STL**: Utilized for data structures and file handling.
- **Multithreading**: For performance enhancement.
- **Mutex**: Ensures thread-safe file access.

## Project Structure

1. **MarketData Class**: Simulates random tick data for price and volume.
2. **DataCollector Class**: Collects and stores data to a file.
3. **DataAnalyzer Class**: Reads and analyzes saved data.

## How to Build and Run

1. Clone the repository.
2. Compile the project:
   ```bash
   g++ -std=c++11 src/*.cpp -I include -o market_data_collector -pthread

## Run the program

./market_data_collector
