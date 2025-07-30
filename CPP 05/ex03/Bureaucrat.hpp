#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
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
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& copy);
        std::string getName() const;
        int getGrade();
        void    increment();
        void    decrement();
        void    executeForm(AForm const &form) const;
        void    signAForm(AForm &f);
};

std::ostream &operator<<(std::ostream &line, Bureaucrat &b);

#endif