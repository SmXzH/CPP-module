#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){std::cout << "Default constructor" << std::endl;}

BitcoinExchange::~BitcoinExchange(){std::cout << "Default distrcutor" << std::endl;}

BitcoinExchange::BitcoinExchange(const BitcoinExchange & src){*this = src;std::cout << "Copy constructor called" << std::endl;}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & src)
{
    std::cout << "Assigment copy overloaded constrcutor called" << std::endl;
    this->btc_db = src.btc_db;
    return *this;
}



BitcoinExchange::BitcoinExchange(const std::string& db_filename) {
    std::ifstream file(db_filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(file, line)) {
        size_t delimiterPos = line.find(',');
        if (delimiterPos != std::string::npos) {
            std::string date = line.substr(0, delimiterPos);
            std::string price_str = line.substr(delimiterPos + 1);

            try {
                double price = std::strtod(price_str.c_str(), NULL);
                btc_db[date] = price;
            } catch (...) {
                // Ignore invalid entries
            }
        }
    }
    file.close();
}

double BitcoinExchange::findExchangeRate(const std::string& date_str) const {
    double closest_rate = 0.0;
    int closest_days = std::numeric_limits<int>::max();

    for (std::map<std::string, double>::const_iterator it = btc_db.begin(); it != btc_db.end(); ++it) {
        int days_difference = std::abs(std::atoi(it->first.c_str()) - std::atoi(date_str.c_str()));
        if (days_difference < closest_days) {
            closest_days = days_difference;
            closest_rate = it->second;
        }
    }

    return closest_rate;
}

void BitcoinExchange::processInputFile(const std::string& input_filename) {
    std::ifstream input_file(input_filename.c_str());
    if (!input_file.is_open()) {
        std::cerr << "Error: could not open input file." << std::endl;
        exit(1);
    }

    std::string line;
    while (std::getline(input_file, line)) {
        if (line == "date | value") {
            continue;
        }

        size_t delimiterPos = line.find('|');
        if (delimiterPos != std::string::npos) {
            std::string date_str = line.substr(0, delimiterPos);
            std::string value_str = line.substr(delimiterPos + 1);

            try {
                double value = std::strtod(value_str.c_str(), NULL);
                if (value < 0) {
                    std::cerr << "Error: not a positive number." << std::endl;
                    continue;
                }
                double exchange_rate = findExchangeRate(date_str);
                if (value > 2147483647) {
                    std::cerr << "Error: too large a number." << std::endl;
                    continue;
                }
                double calculated_value = value * exchange_rate;
                std::cout << date_str << " => " << value_str << " = " << calculated_value << std::endl;
            } catch (...) {
                std::cerr << "Error: invalid number." << std::endl;
            }
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
    input_file.close();
}