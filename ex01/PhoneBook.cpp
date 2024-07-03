/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 19:46:48 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/29 00:14:08 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add_new_contact(Contact newContact)
{
	contacts[newContact.getIndex() - 1] = newContact;
}

void	PhoneBook::search_contact()
{
	std::string full_name;
	int			found_contacts[8];
	int			count = 0;
	std::string	input;
	int			choosen_index;


	std::cout << std::setw(10) << std::right  << "Index";
	std::cout << " | ";
	std::cout << std::setw(10) << std::right  << "First Name";
	std::cout << " | ";
	std::cout << std::setw(10) << std::right  << "Last Name";
	std::cout << " | ";
	std::cout << std::setw(10) << std::right  << "Nickname" << std::endl;
	std::cout << std::setw(50) << std::setfill('-') << "-";
	std::cout << std::setfill(' ') << std::endl;
		 
	for (int i = 0; i < available_contacts; i++)
	{
		contacts[i].show_partial_contact_info();
		found_contacts[count] = contacts[i].getIndex();
		count++;
	}
	
	if (!count)
	{
		std::cout << std::endl <<"No Contact Found!" << std::endl << std::endl;
		return ;
	}
	
	std::cout << std::endl << "Choose An Index : ";
	getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << std::endl << std::endl <<"Phone book closed. Until next time!" << std::endl << std::endl;
		exit (0);
	}
	std::cout << std::endl;
	
	if (input.length() != 1)
	{
		std::cout << "YOU HAVE CHOOSED A WRONG INDEX!" << std::endl;
		return ;
	}	
	
	choosen_index = input[0] - 48;
	
	if (choosen_index < 1 || choosen_index > available_contacts)
	{
		std::cout << "YOU HAVE CHOOSED A WRONG INDEX!" << std::endl;
		return ;
	}	
	
	contacts[choosen_index - 1].show_full_contact_info();
}