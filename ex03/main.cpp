/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:04:21 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/08 12:24:47 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	{
		std::cout << "****************EXECUTE FAILED************" << std::endl;
		Bureaucrat A("BOB", 138);
		Bureaucrat B(A);
		ShrubberyCreationForm aaa("./");
		// B.incrementGrade();
		try{
			A.signForm(aaa);
			B.executeForm(aaa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << A.getGrade() << std::endl;
		std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************EXECUTED************" << std::endl;
		Bureaucrat A("WHOA", 138);
		Bureaucrat B("FRANCK", 138);
		B = A;
		ShrubberyCreationForm aaa("./");
		ShrubberyCreationForm bbb(aaa);
		try{
			A.signForm(bbb);
			B.incrementGrade();
			B.executeForm(bbb);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << A.getGrade() << std::endl;
		std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************EXECUTE FAILED************" << std::endl;
		srand(time(0));
		Bureaucrat A("BOB", 73);
		Bureaucrat B(A);
		RobotomyRequestForm aaa("./");
		// B.incrementGrade();
		try{
			A.signForm(aaa);
			B.executeForm(aaa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << A.getGrade() << std::endl;
		std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************EXECUTED************" << std::endl;
		Bureaucrat A("WHOA", 72);
		Bureaucrat B("FRANCK", 46);
		RobotomyRequestForm aaa("./");
		RobotomyRequestForm bbb(aaa);
		try{
			A.signForm(bbb);
			B.incrementGrade();
			B.executeForm(bbb);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << A.getGrade() << std::endl;
		std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************EXECUTE FAILED************" << std::endl;
		srand(time(0));
		Bureaucrat A("BOB", 25);
		Bureaucrat B(A);
		PresidentialPardonForm aaa("./");
		// B.incrementGrade();
		try{
			A.signForm(aaa);
			B.executeForm(aaa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << A.getGrade() << std::endl;
		std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************EXECUTED************" << std::endl;
		Bureaucrat A("WHOA", 72);
		Bureaucrat B("FRANCK", 46);
		PresidentialPardonForm aaa("./");
		PresidentialPardonForm bbb(aaa);
		try{
			A.signForm(bbb);
			for (int i = 0; i < 45; i++)
			{
				// std::cout << B.getGrade() << std::endl;
				B.incrementGrade();
			}
			B.executeForm(bbb);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try{
			B.signForm(bbb);
			B.executeForm(bbb);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		// std::cout << A.getGrade() << std::endl;
		// std::cout << B.getGrade() << std::endl;
	}
	{
		std::cout << "****************INTERN************" << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat B("FRANCK", 46);
		rrf = someRandomIntern.makeForm("robotomy request", "bender");
		if (rrf == NULL)
			return (1);
		try{
			for (int i = 0; i < 45; i++)
			{
				B.incrementGrade();
			}
			B.signForm(*rrf);
			B.executeForm(*rrf);
		} catch (std::exception &e) {
			delete rrf;
			rrf = NULL;
			std::cout << e.what() << std::endl;
		}
		delete rrf;
	}
	{
		std::cout << "****************INTERN NOT SIGN FORM************" << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat B("FRANCK", 46);
		rrf = someRandomIntern.makeForm("shrubbery creation", "bender");
		if (rrf == NULL)
			return (1);
		try{
			for (int i = 0; i < 45; i++)
			{
				B.incrementGrade();
			}
			// B.signForm(*rrf);
			B.executeForm(*rrf);
		} catch (std::exception &e) {
			delete rrf;
			rrf = NULL;
			std::cout << e.what() << std::endl;
		}
		delete rrf;
	}
	return (0);
}