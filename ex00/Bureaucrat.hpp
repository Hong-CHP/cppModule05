/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:05 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/04 13:57:57 by hporta-c         ###   ########.fr       */
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
		~Bureaucrat() {
			std::cout << "Bureaucrat destruct." << std::endl;
		};
		// getter
		const std::string&	getName() const;
		int	getGrade();
		
		void	incrementGrade();
		void	decrementGrade();
	};

#endif