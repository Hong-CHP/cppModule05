/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:36:55 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 12:05:43 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), target("") {
	std::cout << "Default ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string path): AForm("ShrubberyCreationForm", 145, 137) {
	target = path;
	std::cout << "Default ShrubberyCreationForm constructor for target : " << path << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other) {
	std::cout << "Copy ShrubberyCreationForm constructor" << std::endl;
	this->target = other.target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "ShrubberyCreationForm assigned" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void	ShrubberyCreationForm::executeAction() const {
	std::ofstream outfile((target + "_shrubbery").c_str(), std::ofstream::out);
	if (!outfile)
	{
		std::cerr << "Logical error or writing error." << std::endl;
		return ; 
	}
	outfile << "       jjjjjiiii\n"
        " oojjjjjjiiiii0000EEEPP\n"
        " OOOOOjjjjjiiijjiooiiiiEEE\n"
        "cOjjiij qOp qqqqqjjjiiEEEoo\n"
        "  oO6OuU  /p u gcoUoEEdpP\n"
        "    \\\\\\//  /douEUP\n"
        "        \\\\////\n"
        "         |||/\\\n"
        "         |||\\/\n"
        "         |||||\n"
        "   .....//||||\\....\n";
	outfile.close();
}
