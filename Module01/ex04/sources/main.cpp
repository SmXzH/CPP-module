#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream		_file; // read
		std::ofstream		_newFile; //New file
		std::string			filename = argv[1];
		std::string 		s1 = argv[2];
		std::string 		s2 = argv[3];
		std::string			line;
		size_t				pos;

		// Open file
		_file.open(filename);
		// Check if can we open file
		if (_file.is_open() == false){
			std :: cout << "Error: File can't open !" << std::endl;
			_file.close();
			return(1);
		}
		// Creating new file and appending name + .repace
		_newFile.open(filename.append(".replace"));
		// Check if file can open
		if (_newFile.is_open() == false){
			std :: cout << "Error: File not created!" << std::endl;
			_newFile.close();
			return(1);
		}
		// Read until End Of File
		while (!_file.eof()){
			getline(_file, line);
			pos = line.find(s1);
			while (pos != line.npos){
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos = line.find(s1, pos++);
			}
			_newFile << line << std::endl;
		}
		//Closing files
		_newFile.close();
		_file.close();
		return (0);
	}
	else
	{
		std::cout << "Wrong number of arguments" << std :: endl;
		return (1);
	}
}