#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "Distructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
    std::cout << "Constructor with string called" << std::endl;
    this->_name = name;
    this->_health = 100;
    this->_attack = 10;
    this->_energy = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj){
    this->_name = obj._name;
    this->_health = obj._health;
    this->_energy = obj._energy;
    this->_attack = obj._attack;
    std::cout << "Copy constructor called" << std::endl;
}

ScavTrap ScavTrap::operator=(const ScavTrap &obj){
    this->_name = obj._name;
    this->_health = obj._health;
    this->_energy = obj._energy;
    this->_attack = obj._attack;
    std::cout << "Copy assignation operator called" << std::endl;
    return (*this);
}

void    ScavTrap::guardGate()
{
    if (this->getHP() <= 0)
	{
		std::cout << "ScavTrap [" << this->getName() << "]: YOU DEAD BRO" << std::endl;
		return ;
	}
    std::cout << "ScavTrap [" << this->getName() << "]: Entered gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(this->getHP() < 1){
        std::cout << "ScavTrap [ " << this->getName() << "You are dead!!!" << " ]" << std::endl;
        return ;
    }
    else if(this->getEnergy() < 1){
        std::cout << "ScavTrap [ " << this->getName() << "Not enough energy!!!" << " ]"<< std::endl;
        return ;
    }
    std::cout <<"ScavTrap [ " << "<" << this->getName() << "> attack <" << target << this->getAttack() << "> points of damage" << " ]" << std::endl;
    this->setEnergy(this->getEnergy() - 10);
}

void ScavTrap::takeDamage(unsigned int amount){
    if(this->getHP() < 1){
        std::cout << "ScavTrap [ " << this->getName() << "You are dead!!!" << "]" << std::endl;
        return ;
    }
    this->setHP(this->getHP() - amount);
    if (this->getHP() < 1)
        std::cout << "ScavTrap [ " << "<" << this->getName() << "> Dead after revicieng <" << amount << "> Damage for someone!" << " ]"<< std::endl;
    else
        std::cout << "ScavTrap [ " << "<" << this->getName() << "> recived <" << amount << "> Damage having <" << this->getHP() << "> HP currently ]" << std::endl;
}

void ScavTrap::beRepair(unsigned int amount){
    if(this->getHP() < 1){
        std::cout << "ScavTrap [ " << this->getName() << "You are dead!!! ]" << std::endl;
        return ;
    }
    else if(this->getEnergy() < 1){
        std::cout << "ScavTrap [ " << this->getName() << "Not enough energy!!! ]" << std::endl;
        return ;
    }
    this->setHP(this->getHP() + 1);
    std::cout << "ScavTrap [ " << "<" << this->getName() << "> heal <" << amount << this->getHP() << "> HP having <" << this-> getHP() << "HP currently ]" << std::endl;
    this->setEnergy(this->getEnergy() - 10);
}
void    guardGate(){

}