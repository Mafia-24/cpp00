/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:39:46 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/26 04:08:40 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_full_name(void)
{
	return (this->first_name + this->last_name);
}


void Contact::show_full_contact_info(void)
{
	std::cout << "First Name        : " << this->first_name << std::endl;
	std::cout << "Last Name         : " << this->last_name << std::endl;
	std::cout << "NickName          : " << this->nickname << std::endl;
	std::cout << "Phone Number      : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret 🤫 : " << this->darkest_secret << std::endl;
}

void Contact::show_partial_contact_info(void)
{
	std::cout << std::setw(10) << std::right  << this->index;
	
	std::cout << " | ";
	
	if (this->first_name.length() <= 10)
		std::cout << std::setw(10) << std::right  << this->first_name;
	else
		std::cout << std::setw(9) << std::right  << this->first_name.substr(0, 9) << ".";
	
	std::cout << " | ";
	
	if (this->last_name.length() <= 10)
		std::cout << std::setw(10) << std::right  << this->last_name;
	else
		std::cout << std::setw(9) << std::right  << this->last_name.substr(0, 9) << ".";
	
	std::cout << " | ";
	
	if (this->nickname.length() <= 10)
		std::cout << std::setw(10) << std::right  << this->nickname << std::endl;
	else
		std::cout << std::setw(9) << std::right  << this->nickname.substr(0, 9) << "." << std::endl;
}
