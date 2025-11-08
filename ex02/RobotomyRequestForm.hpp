/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:56:34 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 11:54:25 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <cstdlib>
# include <ctime> 
# include "AForm.hpp"

class	RobotomyRequestForm: public AForm {
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string path);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		virtual	void	executeAction() const;
};

#endif