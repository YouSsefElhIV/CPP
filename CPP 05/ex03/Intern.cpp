#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    (void)copy;
    return (*this);
}

AForm *Intern::makeForm(std::string form_name, std::string target)
{
    int i;
    std::string tab[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    
    for (i = 0; i < 4; i++)
    {
        if (tab[i] == form_name)
            break ;
    }
    switch (i) {
        case 0:
        {
            PresidentialPardonForm *p = new PresidentialPardonForm(target);
            std::cout << "Intern creats " << form_name << "\n";
            return p;
        }
        case 1:
        {
            RobotomyRequestForm *r = new RobotomyRequestForm(target);
            std::cout << "Intern creats " << form_name << "\n";
            return r;
        }
        case 2:
        {
            ShrubberyCreationForm *s = new ShrubberyCreationForm(target);
            std::cout << "Intern creats " << form_name << "\n";
            return s;
        }
        default:
            throw WrongFormException();
    }
}