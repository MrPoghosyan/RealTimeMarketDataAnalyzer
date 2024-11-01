// MarketData.h
#ifndef MARKETDATA_H
#define MARKETDATA_H

#include <iostream>
#include <random>

class MarketData {
private:
    double price;  // Price value of the market data
    int volume;    // Volume value of the market data

public:
    MarketData();  // Constructor initializes default values
    void generateData();  // Method to generate random price and volume

    double getPrice() const;  // Getter for price
    int getVolume() const;    // Getter for volume

    // Overload of operator<< for easy output of MarketData instance
    friend std::ostream& operator<<(std::ostream& os, const MarketData& data);
};

#endif // MARKETDATA_H

