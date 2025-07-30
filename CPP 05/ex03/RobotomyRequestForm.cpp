#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45)
{
    
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):AForm("RobotomyRequestForm", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy)
{
    this->target = copy.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
        this->target = copy.target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned())
    {
        if (this->getSigningReq() <= 72 && this->getExecutingReq() <= 45)
        {
            if (rand() % 2 == 0)
            {
                std::cout << "drill noise, " << b.getName() << " has been robotomized successfully\n";
                std::cout << b.getName() << " executed " << this->getAFormName() << "\n";
            }
            else
                throw FailedToRobotize();
        }
        else
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}