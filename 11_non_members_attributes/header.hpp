/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 06:28:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H

class Sample
{
	public:
		Sample(int v);
		~Sample();

		static int	getNumberInst();//counter to know how many instances of class was made
		
	private:
		static int	_numberInst;

};



#endif