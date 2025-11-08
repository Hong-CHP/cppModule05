/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 08:27:33 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 09:46:25 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm {
	private:
		std::string	target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string path);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		virtual	void	executeAction() const;
};

#endif