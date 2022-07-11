/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:50:54 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/07 12:04:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int gl_var = 1;
int f(void) {return 2;}

namespace Foo{
	int gl_var = 3;				//no conflict with line 15/16
	int f(void) {return 4;}

}

namespace Bar {
	int gl_var = 5;
	int f(void) {return 6;}
}


//SCOPE RESOLUTION OPERATOR
namespace Muf = Bar;//aliasing Namespace

int main()
{
	printf("gl_var:	[%d]\n", gl_var);
	printf("f():	[%d]\n\n", f());

	printf("gl_var:	[%d]\n", Foo::gl_var);
	printf("f():	[%d]\n\n", Foo::f());

	printf("gl_var:	[%d}\n", Bar::gl_var);
	printf("f():	[%d]\n\n", Bar::f());

	printf("gl_var:	[%d]\n", Muf::gl_var);
	printf("f():	[%d]\n\n", Muf::f());

	printf("gl_var:	[%d]\n", gl_var);
	printf("f():	[%d]\n\n", f());

	return (0);
}