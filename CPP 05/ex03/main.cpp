#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>
#include "Intern.hpp"

int main(void)
{
	Intern		intern;
	AForm		*form;
	Bureaucrat	bureau("bureau", 1);

	std::srand(std::time(NULL));

	try
	{
		form = intern.makeForm("RobotomyRequestForm", "bureau");
		bureau.signAForm(*form);
		bureau.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
		delete form;
	}
	std::cout << "\n";
	try
	{
		form = intern.makeForm("ShrubberyCreationForm", "bureau");
		bureau.signAForm(*form);
		bureau.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
		delete form;
	}
	std::cout << "\n";
	try
	{
		form = intern.makeForm("PresidentialPardonForm", "bureau");
		bureau.signAForm(*form);
		bureau.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
		delete form;
	}
	std::cout << "\n";
	try
	{
		form = intern.makeForm("random request", "Elisa");
		bureau.signAForm(*form);
		bureau.executeForm(*form);
		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	return (0);
}
