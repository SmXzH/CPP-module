#include "RPN.hpp"

RPN ::RPN ()
{
}

/*--------------------------------------------------------*/
RPN::RPN (const RPN &a)
{
	this->operator=(a);
}

/*--------------------------------------------------------*/
RPN::~RPN ()
{
}

/*--------------------------------------------------------*/
RPN & RPN::operator = (const RPN &a)
{
	(void)a;
	return (*this);
}

int RPN::CalculationResult(int n1, int n2, char o)
{
	switch (o)
	{
		case '+':
			return (n1 + n2);
		case '-':
			return (n2 - n1);
		case '*':
			return (n1 * n2);
		case '/':
		{
			if (n2 == 0)
				throw std::invalid_argument("Floating Point Exception Dividing on Zero\n");
			return (n2 / n1);
		}
	}
	return (0);
}


void    RPN::ReadInput(std::string input)
{
	std::string ope = "+/*-";
	size_t op, num;
	op = num = 0;
	for (size_t i = 0; i < input.length() ; i++)
	{
		if (isdigit(input[i]))
		{
			num++;
			this->_numbers.push(input[i] - '0');
		}
		else if (ope.find(input[i]) != std::string::npos)
		{
			op++;
			if (_numbers.size() < 2)
        		throw std::invalid_argument("Not enough operands for operator\n");
			int n1 = _numbers.top();
			_numbers.pop();
			_numbers.top() = CalculationResult(n1, _numbers.top(), input[i]);
		}

		else if (isspace(input[i]))
			continue;
		else
			throw std::invalid_argument("Invalid Input\n");
	}
	if ((op + 1) != num)
		throw std::invalid_argument("Number of operators less or greater than numbers\n");
	std::cout << _numbers.top() << "\n";
}