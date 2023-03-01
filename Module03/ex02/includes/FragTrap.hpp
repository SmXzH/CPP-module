#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &obj);
	FragTrap operator=(const FragTrap &obj);
	FragTrap(std::string name);

	void highFivesGuys();
};