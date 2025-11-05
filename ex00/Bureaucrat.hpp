/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:05 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/05 16:29:36 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat {
	private:
		const std::string name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat	&other);
		Bureaucrat&	operator=(const Bureaucrat	&other);
		~Bureaucrat();
		// getter
		const std::string&	getName() const;
		int	getGrade() const;
		
		void	incrementGrade();
		void	decrementGrade();
};

std::ostream& operator<<(std::ostream&os, const Bureaucrat &x);

#endif