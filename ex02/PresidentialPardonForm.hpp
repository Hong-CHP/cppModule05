/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:33:41 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 11:34:24 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class	PresidentialPardonForm: public AForm {
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string path);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		virtual	void	executeAction() const;
};

#endif