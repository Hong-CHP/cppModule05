/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:11:30 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 12:05:07 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name(""), isSigned(false), gradeSign(1), gradeExecute(3) {
	std::cout << "Default AForm constructor" << std::endl;
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute): name(name), isSigned(false), gradeSign(gradeSign), gradeExecute(gradeExecute) {
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
	std::cout << "Default AForm constructor create : " << name << std::endl;
}

AForm::AForm(const AForm &other): name(other.name), gradeSign(other.gradeSign), gradeExecute(other.gradeExecute) {
	std::cout << "Copy AForm constructor create : " << name << std::endl;
	isSigned = other.isSigned;
}

AForm&	AForm::operator=(const AForm &other) {
	std::cout << "AForm assigned : " << name << std::endl;
	isSigned = other.isSigned;
	return (*this);
}

AForm::~AForm() {
	std::cout << "AForm Destructor" << std::endl;	
}

const std::string& AForm::getName() const {
	return (this->name);
}

bool	AForm::getIsSigned() const {
	return (this->isSigned);	
}

int AForm::getGradeSign() const {
	return (this->gradeSign);
}

int AForm::getGradeExecute() const {
	return (this->gradeExecute);
}

void	AForm::beSigned(const Bureaucrat &someone) {
	if (someone.getGrade() > gradeSign)
	{
		throw GradeTooLowException();
	}
	this->isSigned = true;
}

void	AForm::execute(Bureaucrat const &executor) const{
	if (!isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > gradeExecute)
	{
		std::cerr << executor.getName() << " execute failed : "; 
		throw GradeTooLowException();
	}
	executeAction();
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Impossible! Grade is too HIGH!!!";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Impossible! Grade is too LOW!!!";
}

const char *AForm::FormNotSignedException::what() const throw() {
	return "Impossible! Form is not signed!!!";
}

std::ostream& operator<<(std::ostream &os, const AForm &x)
{
    os << "AForm \"" << x.getName()
       << "\", signed: " << (x.getIsSigned() ? "yes" : "no")
       << ", grade to sign: " << x.getGradeSign()
       << ", grade to execute: " << x.getGradeExecute();
	return (os);
}