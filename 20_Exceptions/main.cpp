/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:50:41 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 21:08:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* Use Exception exceptionally, not as standard, since is a lot resource consuming
Many system functions return an exception, es. new-> if (no memory left), it throw an exception, called bad alloc*/
#include <iostream>

void test1()
{
	try
	{
		//Do some stuff
		if (/* there's a error*/)
		{
			throw std::exception();
		}
		else
		{
			//do some stuff
		}
	}
	catch (std::exception e)
	{
		//handle the error here
	}
}

void test2()
{
	//Do some stuff
	if (/*there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do more stuff
	}
}

void test3()
{
	try
	{
		test2();
	}
	catch (std::exception &e) //catch by reference
	{
		//handle error
	}
	
}

void test4()
{
	class PEBKACException: public std::exception
	{
		public:
			virtual const char* what() const throw()	//this function may throw something, es. throw(PonyNotHere Exception)
			{
				return ("Problem exist between keyboard and chair");
			}
	};

	try
	{
			test3();
	}
	catch(PEBKACException& e)
	{
		//handle the fact that the user is an idiot
	}
	catch (std::exception &e)
	{
		//handle other exception that are like std::exception
	}
	
}
int main()
{
	return (0);
}