#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade > 0 && grade <= 150)
        this->grade = grade;
    else
    {
        if (grade <= 0)
            throw GradeTooHighException();
        else
            throw GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat()
{
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): name(copy.name)
{
    this->grade = copy.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        this->grade = copy.grade;
    return (*this);
}

std::string Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}

void    Bureaucrat::increment()
{
    if (this->grade == 1)
        throw GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::decrement()
{
    if (this->grade == 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &line, Bureaucrat &b)
{
    line << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return (line);
}