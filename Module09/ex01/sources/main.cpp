#include <iostream>
#include <stack>
#include <cstdlib>

int rpn_calculate(const char* expression) {
    std::stack<int> stack;

    while (*expression != '\0') {
        if (*expression >= '0' && *expression <= '9') {
            stack.push(*expression - '0');
        } else if (*expression == '+' || *expression == '-' || *expression == '*' || *expression == '/') {
            if (stack.size() < 2) {
                std::cout << "Error: Insufficient operands for operator" << std::endl;
                return -1;
            }
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            int result = 0;
            switch (*expression) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0) {
                        std::cout << "Error: Division by zero" << std::endl;
                        return -1;
                    }
                    result = operand1 / operand2;
                    break;
            }
            stack.push(result);
        } else {
            std::cout << "Error: Invalid token: " << *expression << std::endl;
            return -1;
        }
        ++expression;
    }

    if (stack.size() != 1) {
        std::cout << "Error: Invalid expression" << std::endl;
        return -1;
    }

    return stack.top();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " 'expression'" << std::endl;
        return 1;
    }

    int result = rpn_calculate(argv[1]);
    if (result != -1) {
        std::cout << result << std::endl;
    }

    return 0;
}