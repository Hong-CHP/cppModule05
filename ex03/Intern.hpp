/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 12:09:01 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/08 10:16:15 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
 
class Intern
{
	public:
		Intern();
		~Intern();

		AForm*	makeForm(std::string formName, std::string target);

		AForm*	createShrubbery(std::string target);
		AForm*	createRobotomy(std::string target);
		AForm*	createPresidential(std::string target);
};

#endif