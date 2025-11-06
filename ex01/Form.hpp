/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:11:27 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/06 15:06:37 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Form {
	private:
		const std::string name;
		bool isSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExecute);
		Form(const Form &other);
		Form&	operator=(const Form &other);
		~Form();
		
		// getters
		const std::string& getName() const;
		bool	getIsSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		
		// throw
		class	GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		
		void	beSigned(const Bureaucrat &someone);
		
};

std::ostream& operator<<(std::ostream &os, const Form &x);

#endif