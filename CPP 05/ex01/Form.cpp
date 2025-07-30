#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():gradeRequiredToSign(150), gradeRequiredToExecute(150)
{
    this->isSigned = false;
}

Form::Form(std::string name, int req, int tosign): name(name), gradeRequiredToSign(tosign), gradeRequiredToExecute(req)
{
    if (req < 1 || tosign < 1)
        throw GradeTooHighException();
    else if (req > 150 || tosign > 150)
        throw GradeTooLowException();
    this->isSigned = false;
}

Form::~Form()
{
    
}

Form::Form(const Form& copy):name(copy.name), gradeRequiredToSign(copy.gradeRequiredToSign), gradeRequiredToExecute(copy.gradeRequiredToExecute)
{
    this->isSigned = copy.isSigned;
}

Form &Form::operator=(const Form& copy)
{
    if (this != &copy)
    {
        this->isSigned = copy.isSigned;
    }
    return (*this);
}

std::string Form::getFormName()
{
    return (this->name);
}

bool Form::getIsSigned()
{
    return (this->isSigned);
}

int Form::getSigningReq()
{
    return (this->gradeRequiredToSign);
}

int Form::getExecutingReq()
{
    return (this->gradeRequiredToExecute);
}

void    Form::setIsSigned(bool value)
{
    this->isSigned = value;
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->getSigningReq())
        this->setIsSigned(true);
    else
        throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &line, Form &f)
{
    line << f.getFormName() << ", form signed is " \
    << f.getIsSigned() << ", form's grade required to be signed is " \
    << f.getSigningReq() << ", and the grade required to be executed is " \
    << f.getExecutingReq();
    return (line);
}
