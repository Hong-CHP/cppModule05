/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:05 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/07 10:34:03 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
// # include <cstring>

class AForm;

class	Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat	&other);
		Bureaucrat&	operator=(const Bureaucrat	&other);
		~Bureaucrat();
		
		// getter
		const std::string&	getName() const;
		int	getGrade() const;
		
		// action
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm &a);
		void	executeForm(AForm const &form) const;
		
		// throw
		class	GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		
		class	GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream&os, const Bureaucrat &x);

#endif