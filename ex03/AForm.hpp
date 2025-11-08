/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:11:27 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/08 10:38:07 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm {
	private:
		const std::string name;
		bool isSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		AForm();
		AForm(std::string name, int gradeSign, int gradeExecute);
		AForm(const AForm &other);
		AForm&	operator=(const AForm &other);
		virtual ~AForm();
		
		// getters
		const std::string& getName() const;
		bool	getIsSigned() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		
		void	beSigned(const Bureaucrat &someone);
		virtual	void	execute(Bureaucrat const &executor) const;
		virtual	void	executeAction() const = 0;
		
		// throw
		class	GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class	GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class	FormNotSignedException: public std::exception {
			virtual const char* what() const throw();
		};	
};

std::ostream& operator<<(std::ostream &os, const AForm &x);

#endif