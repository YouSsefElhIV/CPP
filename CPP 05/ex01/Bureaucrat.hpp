#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Form;

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
        Bureaucrat(std::string, int name);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copy);
        Bureaucrat &operator=(const Bureaucrat& copy);
        std::string getName();
        int getGrade();
        void    increment();
        void    decrement();
        void    signForm(Form &f);
};

std::ostream &operator<<(std::ostream &line, Bureaucrat &b);

#endif