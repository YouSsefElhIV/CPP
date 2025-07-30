#ifndef INTERN_HPP
#define INTERN_HPP

#include <exception>
#include <iostream>

class AForm;

class Intern
{
    public:
        class WrongFormException: public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return ("The form name is unknown!");
                }
        };
        Intern();
        ~Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        AForm *makeForm(std::string form_name, std::string target);
};

#endif