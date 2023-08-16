// #include <string>
// #include <iostream>
// #include <fstream>
// #include <map>

// int main(int ac, char* av[])
// {
//     if (ac != 2){
//         std::cerr << "Error : Wrong number of arguments" << std::endl;
//         return 1;
//     }
//     std::string NameOfFile = av[1];
//     std::ifstream ImputFile(NameOfFile.c_str());
//     if (!ImputFile){
//         std::cerr << "Error : Can t open imput file" << std::endl;
//         return 1;
//     }
//     std::map <std::string, float> btcDatabase;

//     std::ifstream btcCsv("btc_database.csv");
//     if (!btcCsv) {
//         std::cerr << "Error : Unable to open Bitcoin database." << std::endl;
//         return 1;
//     }
//     std::string line;
//     while (std::getline(btcCsv, line))
//     {
//         std::string date;
//         float       value;
//         size_t delimeter = line.find("|");
//         if (delimeter != std::string::npos)
//         {
//             date = line.substr(0, delimeter);
//             value = std::stof(line.substr(delimeter + 1));
//             btcDatabase[date] = value;
//         }
//     }
//     std::string imputLine;
//     while (std::getline(ImputFile, imputLine))
//     {
//         std::string date;
//         float       value;

//         size_t delimeterPos = imputLine.find("|");
//         if (delimeterPos != std::string::npos)
//         {
//             date = imputLine.substr(0, delimeterPos);
//             value = std::stof(imputLine.substr(delimeterPos + 1 ));
//         }
//         std::map <std::string, float>::iterator closestDate = btcDatabase.lower_bound(date);
//         if (closestDate != btcDatabase.begin() || (closestDate != btcDatabase.end() && closestDate->first != date))
//             --closestDate;
        
        
//     }
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <cmath>

struct BitcoinPrice {
    float price;
    time_t timestamp;
};

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: btc <input_file>" << std::endl;
        return 1;
    }

    std::map<time_t, BitcoinPrice> btcData;

    // Load Bitcoin price data from the CSV file
    std::ifstream btcCsv("data.csv");
    if (!btcCsv) {
        std::cerr << "Error: Unable to open Bitcoin price database." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(btcCsv, line)) {
        std::string dateStr;
        float price;
        
        size_t delimiterPos = line.find(",");
        if (delimiterPos != std::string::npos) {
            dateStr = line.substr(0, delimiterPos);
            price = st
            d::atof(line.substr(delimiterPos + 1).c_str());
            
            struct tm timeStruct = {};
            if (strptime(dateStr.c_str(), "%Y-%m-%d", &timeStruct)) {
                time_t timestamp = mktime(&timeStruct);
                BitcoinPrice bitcoinPrice;
                bitcoinPrice.price = price;
                bitcoinPrice.timestamp = timestamp;
                btcData[timestamp] = bitcoinPrice;
            }
        }
    }

    // Process the input file
    std::ifstream inputFile(argv[1]);
    if (!inputFile) {
        std::cerr << "Error: Unable to open input file." << std::endl;
        return 1;
    }

    std::string inputLine;
    while (std::getline(inputFile, inputLine)) {
        std::string dateStr;
        float inputValue;

        size_t delimiterPos = inputLine.find(",");
        if (delimiterPos != std::string::npos) {
            dateStr = inputLine.substr(0, delimiterPos);
            inputValue = std::atof(inputLine.substr(delimiterPos + 1).c_str());

            time_t targetDate = btcData.begin()->first; // Default to the earliest date
            for (std::map<time_t, BitcoinPrice>::iterator it = btcData.begin(); it != btcData.end(); ++it) {
                if (it->first <= targetDate && it->first <= btcData.lower_bound(targetDate)->first) {
                    targetDate = it->first;
                }
            }

            float exchangeRate = btcData[targetDate].price;
            float calculatedValue = exchangeRate * inputValue;

            std::cout << "On " << dateStr << ", value of " << inputValue << " BTC is $" << calculatedValue << std::endl;
        }
    }

    return 0;
}