#include "BitcoinExchange.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " input_file.txt" << std::endl;
        return 1;
    }

    BitcoinExchange exchange("./sources/data.csv");
    exchange.processInputFile(argv[1]);

    return 0;
}

