#include "Bureaucrat.hpp"

int main(){
	{
		Form A("Security", 80, 42);
		Bureaucrat B("Jen", 100);
		B.signForm(A);
		std::cout << A;
		std::cout << B;	
	}
	{
		Form A("Security", 80, 42);
		Bureaucrat B("Hal", 60);
		B.signForm(A);
		std::cout << A;
		std::cout << B;	
	}
	{
		Form A("Dono", 123, 45);
		Form Acopy = A;
		std::cout << Acopy;
	}
}