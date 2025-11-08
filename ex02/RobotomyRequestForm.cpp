/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:00:36 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 11:26:05 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45) {
	std::cout << "Default RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string path): AForm("RobotomyRequestForm", 72, 45) {
	target = path;
	std::cout << "Default RobotomyRequestForm constructor for target : " << path << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other) {
	target = other.target;
	std::cout << "Copy RobotomyRequestForm constructor" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	std::cout << "RobotomyRequestForm assigned" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;	
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void	RobotomyRequestForm::executeAction() const {
	std::cout << "Birzzzzzzzzzzzzzz............." << std::endl;
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomy failed." << std::endl;
}