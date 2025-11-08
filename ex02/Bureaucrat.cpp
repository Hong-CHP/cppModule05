/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:02 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 10:47:29 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150) {
	std::cout << "Defaut Bureaucrat construct." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	std::cout << "Defaut Bureaucrat constructor: " << name << " construct." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat	&other): name(other.name) {
	std::cout << "Copy Bureaucrat constructor" << std::endl;
	grade = other.grade;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other)
	{
		this->grade = other.grade; 
	}
	std::cout << "Bureaucrat assigned" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat : " << name << " destruct." << std::endl;
}

const std::string&	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Impossible! Grade is too HIGH!!!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Impossible! Grade is too LOW!!!";
}

void	Bureaucrat::incrementGrade() {
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade() {
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::signForm(AForm& a) {
	try {
		a.beSigned(*this);
		std:: cout << name << " signed " << a.getName() << std::endl;
	} catch (std::exception &e) {
		std:: cerr << name << " couldn't sign " << a.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) const {
	form.execute(*this);
	std::cout << this->name << " executed " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat &x) {
	os << x.getName() << ", bureaucrat grade " << x.getGrade() << ".";
	return (os);
}