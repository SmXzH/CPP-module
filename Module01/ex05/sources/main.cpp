#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("debug");
	harl.complain("warning");
	harl.complain("error");
	harl.complain("info");

	return 0;

}