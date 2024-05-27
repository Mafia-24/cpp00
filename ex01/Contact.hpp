/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 20:34:11 by ymafaman          #+#    #+#             */
/*   Updated: 2024/05/15 22:18:03 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip> 

class Contact
{
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

	public:

		Contact& setIndex(int index)
		{
			this->index = index;
			return (*this);
		}

		Contact& setFirst_name(std::string first_name)
		{
			this->first_name = first_name;
			return (*this);
		}

		Contact& setlast_name(std::string last_name)
		{
			this->last_name = last_name;
			return (*this);
		}

		Contact& setnickname(std::string nickname)
		{
			this->nickname = nickname;
			return (*this);
		}

		Contact& setphone_number(std::string phone_number)
		{
			this->phone_number = phone_number;
			return (*this);
		}

		Contact& setdarkest_secret(std::string darkest_secret)
		{
			this->darkest_secret = darkest_secret;
			return (*this);
		}
		
		int	getIndex(void)
		{
			return (this->index);
		}
	
		std::string get_full_name(void);

		void	show_full_contact_info(void);
		void	show_partial_contact_info(void);
};


#endif