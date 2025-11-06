/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:21:05 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/06 15:09:58 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
// # include <cstring>

class Form;

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
		void	signForm(Form &a);
		
		// throw
		class	GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		
		class	GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream&os, const Bureaucrat &x);

// class	DeepCopyBureaucrat {
// 	private:
// 		char *name;
// 		int grade;
// 	public:
// 		DeepCopyBureaucrat(): name(NULL) {
// 			std::cout << "Default DeepCopyBureaucrat" << std::endl;
// 		};
// 		DeepCopyBureaucrat(const char* str) : grade(150) {
// 			std::cout << "Default DeepCopyBureaucrat" << std::endl;
// 			name = new char[strlen(str) + 1];
// 			strcpy(name, str);
// 		};
// 		DeepCopyBureaucrat(const DeepCopyBureaucrat	&other) : grade(other.grade) {
// 			std::cout << "Copy DeepCopyBureaucrat" << std::endl;
// 			name = new char[strlen(other.name) + 1];
// 			strcpy(name, other.name);
// 		};
// 		DeepCopyBureaucrat&	operator=(const DeepCopyBureaucrat &other) {
// 			std::cout << "DeepCopyBureaucrat assigned" << std::endl;
// 			if (this != &other)
// 			{
// 				if (name != NULL)
// 					delete[] name;
// 				name = new char[strlen(other.name) + 1];
// 				strcpy(name, other.name);
// 				grade = other.grade;
// 			}
// 			return (*this);
// 		};
// 		~DeepCopyBureaucrat() {
// 			delete[] name;
// 			std::cout << "DeepCopyBureaucrat deconstructor!" << std::endl;
// 		};
// 		// getter
// 		void show() {
//         std::cout << name << ", grade " << grade << std::endl;
//     }
// };

#endif