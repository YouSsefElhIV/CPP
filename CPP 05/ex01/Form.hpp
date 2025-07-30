# ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <ostream>
#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool    isSigned;
        const int gradeRequiredToSign;
        const int gradeRequiredToExecute;
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
        Form();
        ~Form();
        Form(const Form& copy);
        Form &operator=(const Form& copy);
        Form(std::string name, int req, int tosign);
        bool getIsSigned();
        int getExecutingReq();
        int getSigningReq();
        void    setIsSigned(bool value);
        std::string getFormName();
        void    beSigned(Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &line, Form &f);

#endif