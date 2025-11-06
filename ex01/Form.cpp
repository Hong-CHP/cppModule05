/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:11:30 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/06 15:12:32 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name(""), isSigned(false), gradeSign(1), gradeExecute(3) {
	std::cout << "Default Form constructor" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute): name(name), isSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
	if (gradeExecute > 150 || gradeSign > 150)
	{
		if (gradeExecute > 150)
			std::cout << "gradeExecute is impossible to initialized: ";
		if (gradeSign > 150)
			std::cout << "gradeSign is impossible to initialized: ";	
		throw GradeTooLowException();
	}
	if (gradeExecute < 1 || gradeSign < 1)
	{
		if (gradeExecute < 1)
			std::cout << "gradeExecute is impossible to initialized: ";
		if (gradeSign < 1)
			std::cout << "gradeSign is impossible to initialized: "; 
		throw GradeTooHighException();
	}
	std::cout << "Default Form constructor create : " << name << std::endl;
}

Form::Form(const Form &other): name(other.name), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {
	std::cout << "Copy Form constructor create : " << name << std::endl;
	isSigned = other.isSigned;
}

Form&	Form::operator=(const Form &other) {
	std::cout << "Form assigned : " << name << std::endl;
	isSigned = other.isSigned;
	return (*this);
}

Form::~Form() {
	std::cout << "Form Destructor" << std::endl;	
}

const std::string& Form::getName() const {
	return (this->name);
}

bool	Form::getIsSigned() const {
	return (this->isSigned);	
}

int Form::getGradeSign() const {
	return (this->gradeSign);
}

int Form::getGradeExecute() const {
	return (this->gradeExecute);
}

void	Form::beSigned(const Bureaucrat &someone) {
	if (someone.getGrade() > gradeSign)
		throw GradeTooLowException();
	this->isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Impossible! Grade is too HIGH!!!";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Impossible! Grade is too LOW!!!";
}

std::ostream& operator<<(std::ostream &os, const Form &x)
{
    os << "Form \"" << x.getName()
       << "\", signed: " << (x.getIsSigned() ? "yes" : "no")
       << ", grade to sign: " << x.getGradeSign()
       << ", grade to execute: " << x.getGradeExecute();
	return (os);
}