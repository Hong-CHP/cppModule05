/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:09:04 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/08 10:28:04 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor" << std::endl;
}

Intern::~Intern() {
	std::cout << "Default Intern destructor" << std::endl;
}

AForm*	Intern::makeForm(std::string formName, std::string target) {
	std::string formRequire[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm*	(Intern::*func[3])(std::string target) = {
		&Intern::createShrubbery,
		&Intern::createRobotomy,
		&Intern::createPresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formRequire[i])
			return (this->*func[i])(target);
		i++;
	}
	std::cout << "Creation failed, form does not exist..." << std::endl;
	return (NULL);
}

AForm*	Intern::createShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
AForm*	Intern::createRobotomy(std::string target)
{
	return (new ShrubberyCreationForm(target));
}
AForm*	Intern::createPresidential(std::string target)
{
	return (new ShrubberyCreationForm(target));	
}