#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;

    public:
        class GradeTooHighException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("grade too high\n");
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("grade too low\n");
                }
        };
        class FailedToOpenFileException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("File Failed\n");
                }
        };
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
        void    execute(Bureaucrat const &b) const;
};

#endif