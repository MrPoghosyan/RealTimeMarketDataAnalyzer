// main.cpp
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include "MarketData.h"
#include "DataCollector.h"
#include "DataAnalyzer.h"

// Function to collect market data and save it to a file
void collectMarketData(DataCollector& collector, int duration) {
    MarketData data;
    for (int i = 0; i < duration; ++i) {
        data.generateData();  // Generate random data
        collector.saveData(data);  // Save data to file
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate real-time delay
    }
}

int main() {
    std::mutex fileMutex;
    DataCollector collector("market_data.txt", fileMutex);

    std::thread dataThread(collectMarketData, std::ref(collector), 50);
    dataThread.join();

    DataAnalyzer analyzer;
    analyzer.analyze("market_data.txt");

    return 0;
}

