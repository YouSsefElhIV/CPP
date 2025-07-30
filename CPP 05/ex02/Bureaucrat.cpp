#include "Bureaucrat.hpp"
#include "AForm.hpp"

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

std::string Bureaucrat::getName() const
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

void    Bureaucrat::executeForm(AForm const & form) const
{
    form.execute(*this);
}

void    Bureaucrat::signAForm(AForm &f)
{
    if (f.getIsSigned() == true)
        std::cout << this->getName() << " couldnt sign " << f.getAFormName()  << "because " << "its already signed" << "\n";
    else
    {
        f.beSigned(*this);
        if (f.getIsSigned() == true)
            std::cout << this->getName() << " signed " << f.getAFormName() << "\n";
        else
            std::cout << this->getName() << " couldnt sign " << f.getAFormName()  << "because " << "grade too low" << "\n";
    }
    
}
