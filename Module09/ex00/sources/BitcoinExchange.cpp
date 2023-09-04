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


bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::checkDate(std::string & dateStr)
{
    std::istringstream ss(dateStr);
    int year;
    int mounth;
    int date;
    char dash1;
    char dash2;

    ss >> year >> dash1 >> mounth >> dash2 >> date;
    if (ss.fail() || dash1 != '-' || dash2 != '-')
        return false;
    if (year < 0 || mounth < 1 || mounth > 12 || date < 1 || date > 31)
        return false;
    if (mounth == 4 || mounth == 6 || mounth == 9 || mounth == 11)
        return (date <= 30); // April, June, September, November have 30 days
    else if (mounth == 2) {
        return (isLeapYear(year) ? (date <= 29) : (date <= 28));
    }
    return (true);
}


BitcoinExchange::BitcoinExchange(const std::string& db_filename) {
    std::cout << "Constructor with param was called" << std::endl;
    std::ifstream file(db_filename.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        std::exit(1);
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line == "date,exchange_rate")
            continue;
        size_t delimiterPos = line.find(',');
        if (delimiterPos != std::string::npos) {
            std::string date = line.substr(0, delimiterPos);
            std::string price_str = line.substr(delimiterPos + 1);

            try {
                if (!checkDate(date))
                {
                    std::cerr << "Error : invalid date in  DB " << date << std::endl;
                    continue;
                }
                double price = std::strtod(price_str.c_str(), NULL);
                btc_db[date] = price;
            } catch (...) {
                std::cerr << "Error: invalid date." << std::endl;
            }
        }
    }
    file.close();
}

double BitcoinExchange::findExchangeRate(std::string& date_str)
{
    std::map<std::string, double>::iterator it = btc_db.lower_bound(date_str);
    if (it->first >= date_str && it != btc_db.begin())
        it--;
    return (it->second);
}

void BitcoinExchange::processInputFile(const std::string& input_filename) {
    std::ifstream input_file(input_filename.c_str());
    if (!input_file.is_open()) {
        std::cerr << "Error: could not open input file." << std::endl;
        std::exit(1);
    }

    std::string line;
    while (std::getline(input_file, line)) {
        if (line == "date | value") {
            continue;
        }

        size_t delimiterPos = line.find('|');
        if (delimiterPos != std::string::npos)
        {
            std::string date_str = line.substr(0, delimiterPos);
            std::string value_str = line.substr(delimiterPos + 1);

            try {
                if (!checkDate(date_str))
                {
                    std::cerr << "Error:  invalid date " << "=> " << date_str << std::endl;
                    continue;
                }
                double value = std::strtod(value_str.c_str(), NULL);
                if (value < 0) {
                    std::cerr << "Error: not a positive number." << std::endl;
                    continue;
                }
                if (value > 2147483647) {
                    std::cerr << "Error: too large a number." << std::endl;
                    continue;
                }
                double exchange_rate = findExchangeRate(date_str);
                double calculated_value = value * exchange_rate;
                std::cout << date_str << " => " << value << " = " << calculated_value << std::endl;
            } catch (...) {
                std::cerr << "Error: invalid number." << std::endl;
            }
        }
         else
        {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }
    input_file.close();
}