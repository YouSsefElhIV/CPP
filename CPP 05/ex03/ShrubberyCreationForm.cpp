#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = "default_target";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):AForm(copy)
{
    this->target = copy.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)  
        this->target = copy.target;
    return(*this);
}


void    ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
    if (this->getIsSigned())
    {
        if (this->getSigningReq() <= 145 && this->getExecutingReq() <= 137)
        {
            (void)b;
            std::string name;
            name = this->target + "_shrubbery";
            std::ofstream file(name.c_str());
            if (file)
            {
                file << "      ccee88oo\n";
                file << "   C8O8O8Q8PoOb o8oo\n";
                file << "  dOB69QO8PdUOpugoO9bD\n";
                file << " CgggbU8OU qOp qOdoUOdcb\n";
                file << "    6OuU  /p u gcoUodpP\n";
                file << "      \\\\//  /douUP\n";
                file << "        \\///\n";
                file << "         |||/\\\n";
                file << "         |||||\n";
                file << "   .....//||||\\....\n";
                file.close();
                std::cout << b.getName() << " executed " << this->getAFormName() << "\n";
            }
            else
                throw FailedToOpenFileException();
        }
        else
            throw GradeTooLowException();
    }
    else
        throw NotSignedException();
}
