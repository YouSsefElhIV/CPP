#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy)
{
    this->target = copy.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
        this->target = copy.target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned())
    {
        if (this->getSigningReq() <= 25 && this->getExecutingReq() <= 5)
        {
            std::cout << b.getName() << " has been pardoned by Zaphod Beeblebrox.\n";
            std::cout << b.getName() << " executed " << this->getAFormName() << "\n";
        }
        else
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}
