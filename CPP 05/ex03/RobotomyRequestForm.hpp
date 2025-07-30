#ifndef ROBOTOMYREQUESTFORM
#define ROBOTOMYREQUESTFORM

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
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
        class FailedToRobotize: public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return ("he's tough, cant make him a robot, maybe next time\n");
                }
        };
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& copy);
        void    execute(Bureaucrat const &b) const ;
};

#endif