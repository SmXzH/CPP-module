#include "Bureaucrat.hpp"

int main(){
	{
		Bureaucrat A("Ram", 151);
	}
	std::cout << ">=======================================================<" << std::endl;
	{
		Bureaucrat C("One", 5);
		C.grade_decrement();
		std::cout << C;
	}
	std::cout << ">=======================================================<" << std::endl;
	{
		Bureaucrat C("Tom",1);
		C.grade_increment();
		std::cout << C;
	}
	std::cout << ">=======================================================<" << std::endl;
	{
		Bureaucrat B("john", 151);
		B.grade_increment();
		std::cout << B;
	}
	std::cout << ">=======================================================<" << std::endl;
	{
		Bureaucrat D("Adam", 150);
		D.grade_decrement();
		std::cout << D;
	}
	std::cout << ">=======================================================<" << std::endl;
	return (0);
}