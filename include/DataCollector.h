// DataCollector.h
#ifndef DATACOLLECTOR_H
#define DATACOLLECTOR_H

#include <fstream>
#include <mutex>
#include "MarketData.h"

class DataCollector {
private:
    std::ofstream file;       // File stream for data storage
    std::mutex& fileMutex;    // Reference to mutex for thread-safe operations

public:
    DataCollector(const std::string& filename, std::mutex& mtx);
    ~DataCollector();
    void saveData(const MarketData& data);  // Save market data to file
};

#endif // DATACOLLECTOR_H

