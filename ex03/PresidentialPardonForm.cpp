/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:34:30 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 11:36:54 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5) {
	std::cout << "Default PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string path): AForm("PresidentialPardonForm", 25, 5) {
	target = path;
	std::cout << "Default PresidentialPardonForm constructor for target : " << path << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other) {
	target = other.target;
	std::cout << "Copy PresidentialPardonForm constructor" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "PresidentialPardonForm assigned" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		target = other.target;	
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void	PresidentialPardonForm::executeAction() const {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}