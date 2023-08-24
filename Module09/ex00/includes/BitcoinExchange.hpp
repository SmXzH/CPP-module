#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <cstdlib>
#include <cmath>
#include <limits>

class BitcoinExchange {
private:
    std::map<std::string, double> btc_db;
    BitcoinExchange();

public:
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &);
    BitcoinExchange & operator=(const BitcoinExchange &);
    BitcoinExchange(const std::string& db_filename);

    double findExchangeRate(const std::string& date_str) const;
    void processInputFile(const std::string& input_filename);
};

#endif