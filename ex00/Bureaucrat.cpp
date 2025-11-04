/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:02 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/04 14:00:19 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << "Defaut Bureaucrat construct." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name): name(name) {
	std::cout << "Defaut " << name << " Bureaucrat construct." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat	&other): name(name) {
	std::cout << "Copy Bureaucrat constructor" << std::endl;
	this->grade = other.grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destruct." << std::endl;
}

const std::string&	Bureaucrat::getName() const {
	return (this->name);
}

int	Bureaucrat::getGrade() {
	return (this->grade);
}