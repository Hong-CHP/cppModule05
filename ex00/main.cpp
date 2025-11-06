/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:28:34 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/06 12:20:42 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat A("Poisson d'argent", 151);
		std::cout << A << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "************************************" << std::endl;
	try {
		Bureaucrat C("Escargot", 0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "************************************" << std::endl;
	try {
		Bureaucrat B("Millepattes", 150);
		for (int i = 0; i < 150; i++)
			B.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "************************************" << std::endl;
	try {
		Bureaucrat C("Escargot", 0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "******************COPY******************" << std::endl;
	try {
		Bureaucrat DD("MIMI", 150);
		Bureaucrat cloneDD(DD);
		DD.incrementGrade();
		std::cout << DD << std::endl;
		cloneDD.decrementGrade();
		std::cout << cloneDD << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "******************ASSIGNMENT******************" << std::endl;
	try {
		Bureaucrat DD("MIMI", 150);
		Bureaucrat cloneDD;
		DD.incrementGrade();
		std::cout << DD << std::endl;
		cloneDD = DD;
		std::cout << cloneDD << std::endl;
		cloneDD.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "******************HEAP COPY******************" << std::endl;
	Bureaucrat *cloneDD = NULL;
	try {
		Bureaucrat DD("MIMI", 150);
		cloneDD = new Bureaucrat(DD);
		DD.incrementGrade();
		std::cout << DD << std::endl;
		cloneDD->decrementGrade();
		std::cout << *cloneDD << std::endl;
	} catch (std::exception &e) {
		delete cloneDD;
		std::cerr << e.what() << std::endl;
	}
	// DeepCopyBureaucrat a("Hong");
	// DeepCopyBureaucrat b = a;
	// DeepCopyBureaucrat c;
	// c = b;
	// a.show();
	// b.show();
	// c.show();
	// c = DeepCopyBureaucrat("Cerise");
	// b.show();
	// c.show();
	return (0);
}