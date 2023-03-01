#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->_health = 10;
    this->_energy = 10;
    this->_attack = 0;
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Distructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "Constructor with string called" << std::endl;
    this->_name = name;
    this->_health = 10;
    this->_energy = 10;
    this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj){
    this->_name = obj._name;
    this->_health = obj._health;
    this->_energy = obj._energy;
    this->_attack = obj._attack;
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap ClapTrap::operator=(const ClapTrap &obj){
    this->_name = obj._name;
    this->_health = obj._health;
    this->_energy = obj._energy;
    this->_attack = obj._attack;
    std::cout << "Copy assignation operator called" << std::endl;
    return (*this);
}

/*----------------------GETTERS*--------------------------*/

std::string ClapTrap::getName(){
    return(this->_name);
}
int ClapTrap::getHP(){
    return(this->_health);
}
int ClapTrap::getEnergy(){
    return(this->_energy);
}
int ClapTrap::getAttack(){
    return(this->_attack);
}
/*----------------------SETTERS--------------------------*/

void    ClapTrap::setName(std::string name){
    this->_name = name;
}
void    ClapTrap::setHP(int HP){
    this->_health = HP;
}
void    ClapTrap::setEnergy(int ngr){
    this->_energy = ngr;
}
void    ClapTrap::setAttack(int atk){
    this->_attack = atk;
}


void ClapTrap::attack(const std::string &target){
    if(this->getHP() < 1){
        std::cout << this->getName() << " You are dead!!!" << std::endl;
        return ;
    }
    else if(this->getEnergy() < 1){
        std::cout << this->getName() << " Not enough energy!!!" << std::endl;
        return ;
    }
    std::cout << "<" << this->getName() << "> attack " << target << " <" << this->getAttack() << ">points of damage" << std::endl;
    this->setEnergy(this->getEnergy() - 1);
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->getHP() < 1){
        std::cout << this->getName() << " You are dead!!!" << std::endl;
        return ;
    }
    this->setHP(this->getHP() - amount);
    if (this->getHP() < 1)
        std::cout << "<" << this->getName() << "> Dead after revicieng <" << amount << "> Damage from someone!" << std::endl;
    else
        std::cout << "<" << this->getName() << "> recived <" << amount << "> Damage having <" << this->getHP() << "> HP currently" << std::endl;
}

void ClapTrap::beRepair(unsigned int amount){
    if(this->getHP() < 1){
        std::cout << this->getName() << " You are dead!!!" << std::endl;
        return ;
    }
    else if(this->getEnergy() < 1){
        std::cout << this->getName() << " Not enough energy!!!" << std::endl;
        return ;
    }
    this->setHP(this->getHP() + amount);
    std::cout << "<" << this->getName() << "> heal <" << amount << "> HP having <" << this-> getHP() << "> HP currently" << std::endl;
    this->setEnergy(this->getEnergy() - 1);
}