#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm():gradeRequiredToSign(150), gradeRequiredToExecute(150)
{
    this->isSigned = false;
}

AForm::AForm(std::string name, int tosign, int req): name(name), gradeRequiredToSign(tosign), gradeRequiredToExecute(req)
{
    if (req < 1 || tosign < 1)
        throw GradeTooHighException();
    else if (req > 150 || tosign > 150)
        throw GradeTooLowException();
    this->isSigned = false;
}

AForm::~AForm()
{
    
}

AForm::AForm(const AForm& copy):name(copy.name), gradeRequiredToSign(copy.gradeRequiredToSign), gradeRequiredToExecute(copy.gradeRequiredToExecute)
{
    this->isSigned = copy.isSigned;
}

AForm &AForm::operator=(const AForm& copy)
{
    if (this != &copy)
    {
        this->isSigned = copy.isSigned;
    }
    return (*this);
}

std::string AForm::getAFormName() const
{
    return (this->name);
}

bool AForm::getIsSigned() const 
{
    return (this->isSigned);
}

int AForm::getSigningReq() const 
{
    return (this->gradeRequiredToSign);
}

int AForm::getExecutingReq() const
{
    return (this->gradeRequiredToExecute);
}

void    AForm::setIsSigned(bool value)
{
    this->isSigned = value;
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->getSigningReq())
        this->setIsSigned(true);
    else
    {
        std::cout << b.getGrade() << " " << this->getSigningReq() << "\n";
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &line, AForm &f)
{
    line << f.getAFormName() << ", form signed is " \
    << f.getIsSigned() << ", form's grade required to be signed is " \
    << f.getSigningReq() << ", and the grade required to be executed is " \
    << f.getExecutingReq();
    return (line);
}
