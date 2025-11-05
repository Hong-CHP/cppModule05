/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:02 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/05 16:34:52 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Defaut Bureaucrat construct." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): name(name), grade(150) {
	std::cout << "Defaut Bureaucrat constructor: " << name << " construct." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat	&other): name(other.name) {
	std::cout << "Copy Bureaucrat constructor" << std::endl;
	this->grade = other.grade;
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

void	Bureaucrat::incrementGrade() {
	grade--;
}

void	Bureaucrat::decrementGrade() {
	grade++;
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat &x) {
	os << x.getName() << ", bureaucrat grade " << x.getGrade() << ".";
	return (os);
}