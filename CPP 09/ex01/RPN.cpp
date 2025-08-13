#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{
    
}

RPN::RPN(const RPN& copy)
{
    this->container = copy.container;
    this->tmp = copy.tmp;
}

RPN &RPN::operator=(const RPN& copy)
{
    if (this != &copy)
    {
        this->container = copy.container;
        this->tmp = copy.tmp;
    }
    return (*this);
}

bool is_infinite(double x) {
    if (x == std::numeric_limits<double>::infinity() 
    || x == -std::numeric_limits<double>::infinity())
        return (true);
    return (false);
}

int RPN::operation(std::string expression)
{
    //fill the container first with a check for weird input.
    int i = 0;
    double x;
    if (expression.size() == 0)
    {
        std::cerr << "No Expression is detected\n";
        return (1);
    }
    if (expression.size() == 1 && expression[i] >= '0' && expression[i] <= '9')
    {
        std::cout << expression[0] - '0' << "\n";
        return (0);
    }
    while (i < (int)expression.length())
    {
        while (std::isspace(expression[i]))
            i++;
        if (expression[i] >= '0' && expression[i] <= '9' && i + 1 < (int)expression.length() && std::isspace(expression[i + 1]))
        {
            this->container.push(expression[i] - '0');
            i++;
        }
        else if ((expression[i] == '+' || expression[i] == '-' || expression[i] == '*'|| expression[i] == '/')
        && (i + 1 == (int)expression.size() || std::isspace(expression[i + 1])) && this->container.size() >= 2)
        {
            x = this->container.top();
            this->container.pop();
            double y = this->container.top();
            this->container.pop();
            if (expression[i] == '+')
                x = x + y;
            else if (expression[i] == '-')
                x = y - x;
            else if (expression[i] == '*')
                x = x * y;
            else if (expression[i] == '/')
            {
                if (x == 0)
                {
                    std::cerr << "Can't devide by 0\n";
                    return (1);
                }
                x = y / x;
            }
            if (is_infinite(x))
            {
                std::cerr << "Error\n";
                return (1);
            }
            this->container.push(x);
            i++;
            while (std::isspace(expression[i]))
                i++;
        }
        else
        {
            std::cerr << "Expression Error\n";
            return (1);
        }
    }
    if (this->container.size() != 1)
    {
        std::cerr << "Expression Error\n";
        return (1);
    }
    std::cout << this->container.top() << "\n";
    return (0);
}
