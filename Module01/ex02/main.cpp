#include <string>
#include <iostream>

#define RST  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << KRED"Memory address of 'str': " RST << &str << std::endl;
	std::cout << KRED"Memory address of 'stringPTR': " RST << stringPTR << std::endl;
	std::cout << KRED"Memory address of 'stringREF': " RST << &stringREF << std::endl;

	std::cout << KBLU "Value of 'str': " RST << str << std::endl;
	std::cout << KBLU "Value of 'stringPTR': " RST << *stringPTR << std::endl;
	std::cout << KBLU "Value of 'stringREF': " RST << stringREF << std::endl;
	return 0;
}