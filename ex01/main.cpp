/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:28:34 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/06 15:24:50 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{	std::cout << "*****************FORM READ******************" << std::endl;
		try {
			Form RR("read", 1, 150);
			std::cout << RR << std::endl;
			Bureaucrat CC("coco", 2);
			CC.signForm(RR);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "*****************FORM WRITE******************" << std::endl;
		try {
			Form RR("write", 1, 10);
			std::cout << RR << std::endl;
			Bureaucrat CC("coco", 1);
			CC.signForm(RR);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "*****************FORM EXCEPT******************" << std::endl;
		try {
			Form RR("exception", 0, 10);
			std::cout << RR << std::endl;
			Bureaucrat CC("coco", 1);
			CC.signForm(RR);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "*****************FORM EXCEPT******************" << std::endl;
		try {
			Form RR("exception", 1, 151);
			std::cout << RR << std::endl;
			Bureaucrat CC("coco", 1);
			CC.signForm(RR);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}