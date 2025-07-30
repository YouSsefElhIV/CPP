# ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
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
        class NotSignedException: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("Form not signed\n");
                }
        };
        AForm();
        virtual ~AForm();
        AForm(const AForm& copy);
        AForm &operator=(const AForm& copy);
        AForm(std::string name, int tosign, int req);
        bool getIsSigned() const ;
        int getExecutingReq() const ;
        int getSigningReq() const ;
        void    setIsSigned(bool value);
        std::string getAFormName() const;
        void    beSigned(Bureaucrat &b);
        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &line, AForm &f);

#endif