#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av){
		std::ifstream file(av[1]);
		if (!file.is_open())
		{
			std::cout << "Error: file not found" << std::endl;
			return 1;
		}
		std::string line;
		while (!file.eof())
		{
			getline(file, line);
			std::cout << line << std::endl;
		}

		file.close();
	return 0;
}