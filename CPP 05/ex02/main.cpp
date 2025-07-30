#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main(void)
{
	std::srand(std::time(NULL));
	try
	{
		Bureaucrat b("bureau", 11);
		PresidentialPardonForm p("barack obama");
		
		b.signAForm(p);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << "\n";
	}

	std::cout << "\n";


	try
	{
		Bureaucrat b("bureau", 11);
		RobotomyRequestForm p("bureau");
		
		b.signAForm(p);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << "\n";
	}

	std::cout << "\n";

	try
	{
		Bureaucrat b("home_bureau", 11);
		ShrubberyCreationForm p("home_bureau");
		
		b.signAForm(p);
		b.executeForm(p);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << "\n";
	}
	return (0);
}
