/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 01:02:05 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 23:49:44 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

//REFERENCES AS ARGUMENTS
//By Ptr vs By Ref. As reference I pass an adresse

/*BY PTR: if at some point shouldnt exist or shoul change
VS
BY REF: if should always exist and never change*/


void	byPtr(std::string* s)
{
	*s += " and ponies";
}

void	byConstPtr(std::string const *s)
{
	std::cout << *s << std::endl;
}

void	byRef(std::string& s)
{
	s += " and ponies";
}

void	byConstRef(std::string const & s)
{
	std::cout << s << std::endl;
}


//REFERENCE: like a constant pointer, always pointing to same item
int main(void)
{	
	std::string s = "I like butterflies.";

	std::cout << s << std::endl;
	byPtr(&s);
	byConstPtr(&s);

	s = "I like atters";
	
	std::cout << s << std::endl;
	byRef(s);
	byConstRef(s);
	
	return (0);
}

/*OUTPUT
I like butterflies.
I like butterflies. and ponies
I like atters
I like atters and ponies
*/


//PART 3 not made, but you can return also references(ab min 8.00)


/*IFSSTREAM:open files
std::ifsream	ifs("numbers");
unsigned int	dst;
unsigned int	dst2;
ifs >> dst >> dst2;

std::cout << dst<< " " << dst2 << std::endl;
ifs.close();
/-----
std::ofstream ofs("test.out");
ofs << "i like ponies a lot" << std::endl;
ofs.close();
*/