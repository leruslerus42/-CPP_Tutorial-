/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:03 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/08 01:15:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_CLASS_H
#define HEADER_CLASS_H

class Sample
{
private:
	/* data */
public:
	float const pi;
	int qd;
	Sample(float const f);
	~Sample();

	void	bar(void) const;
};



#endif