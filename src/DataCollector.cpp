// DataCollector.cpp
#include "DataCollector.h"

DataCollector::DataCollector(const std::string& filename, std::mutex& mtx) : fileMutex(mtx) {
    file.open(filename, std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
    }
}

DataCollector::~DataCollector() {
    if (file.is_open()) {
        file.close();
    }
}

void DataCollector::saveData(const MarketData& data) {
    std::lock_guard<std::mutex> lock(fileMutex);  // Lock file access with mutex
    if (file.is_open()) {
        file << data.getPrice() << "," << data.getVolume() << "\n";
    }
}

