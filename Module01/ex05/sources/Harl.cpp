#include "Harl.hpp"

void debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void warning()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void error()
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void info()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void complain(std::string level)
{
	if (level == "debug")
		debug();
	else if (level == "warning")
		warning();
	else if (level == "error")
		error();
	else if (level == "info")
		info();
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
