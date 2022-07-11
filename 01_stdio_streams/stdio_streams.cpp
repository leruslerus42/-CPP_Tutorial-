/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio_streams.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:09:18 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/07 12:28:42 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//IN && COUT (stdin/stdout)
#include <iostream>

int main()
{
	char buf[512];
	std::cout << "Hello World !" << std::endl; //redirect string "Hello World" to standard output; then redirecting endl (means /n) to stdout
	
	std::cout << "Input a word ";
	std::cin >> buf;					//like scanf
	std::cout << "You entered: [" << buf << "]" << std::endl;
}