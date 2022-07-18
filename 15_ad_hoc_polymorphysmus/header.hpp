/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/13 08:04:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H

class Integer
{
	private:
		int _n;
	public:

		Integer (int const n);
		~Integer(void);

		int	get_value(void) const;

		Integer & operator-(Integer const & rhs);	//function overload
		Integer	operator+(Integer const & rhs) const;
	

};

std::ostream & operator << (std::ostream & o, Integer const & rhs);


#endif