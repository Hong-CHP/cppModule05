/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:04:21 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/08 11:44:59 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	}
	{
		std::cout << "****************EXECUTED************" << std::endl;
		Bureaucrat A("WHOA", 72);
		Bureaucrat B("FRANCK", 46);
		PresidentialPardonForm *aaa  = new PresidentialPardonForm("./");
		PresidentialPardonForm bbb(*aaa);
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
		delete aaa;
	}
	{
		std::cout << "****************EXECUTED************" << std::endl;
		Bureaucrat A("WHOA", 72);
		Bureaucrat B("FRANCK", 46);
		AForm *aaa  = new PresidentialPardonForm("./");
		try{
			A.signForm(*aaa);
			for (int i = 0; i < 45; i++)
			{
				// std::cout << B.getGrade() << std::endl;
				B.incrementGrade();
			}
			B.executeForm(*aaa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try{
			B.signForm(*aaa);
			B.executeForm(*aaa);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete aaa;
	}
	return (0);
}