/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 03:20:52 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H


struct Sample2() {
	int foo;

	Sample2();
	~Sample2();

	void publicBar(void) const;

}

/* Class and struct are similar, fast the same.

STRUCT: Scope public by default
CLASS:	Scope private by default

To programm in clean way -> PRIVATE
*/

class Sample
{
	//no declaration, private bei default
	Sample();
	~Sample();


	void publicBar(void) const;


};



#endif