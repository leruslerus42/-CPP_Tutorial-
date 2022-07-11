/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 08:01:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H

class Sample
{
	public:

		int	foo;
		
		Sample();
		~Sample();

		void bar(void) const;

};



#endif