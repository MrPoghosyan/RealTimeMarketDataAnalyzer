// MarketData.cpp
#include "MarketData.h"

MarketData::MarketData() : price(0.0), volume(0) {}

void MarketData::generateData() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> priceDist(100.0, 200.0);
    std::uniform_int_distribution<> volumeDist(1, 1000);
    price = priceDist(gen);
    volume = volumeDist(gen);
}

double MarketData::getPrice() const { return price; }
int MarketData::getVolume() const { return volume; }

std::ostream& operator<<(std::ostream& os, const MarketData& data) {
    os << "Price: " << data.price << ", Volume: " << data.volume;
    return os;
}

