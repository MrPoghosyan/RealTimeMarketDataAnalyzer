// DataAnalyzer.cpp
#include "DataAnalyzer.h"
#include <iostream>
#include <fstream>
#include <sstream>

void DataAnalyzer::analyze(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    double total_price = 0.0;
    int total_volume = 0, count = 0;
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string priceStr, volumeStr;
        std::getline(ss, priceStr, ',');
        std::getline(ss, volumeStr, ',');

        double price = std::stod(priceStr);
        int volume = std::stoi(volumeStr);

        total_price += price;
        total_volume += volume;
        ++count;
    }

    file.close();

    if (count > 0) {
        std::cout << "Average Price: " << total_price / count << std::endl;
        std::cout << "Average Volume: " << total_volume / count << std::endl;
    }
}

