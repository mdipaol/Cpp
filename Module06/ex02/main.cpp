/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:40:35 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/13 20:32:53 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	int a = (std::rand() % 3) + 1;
	switch (a)
	{
	case 1:
	{
		std::cout << "Generate A" << std::endl;
		return new A();
	}
	case 2:
	{
		std::cout << "Generate B" << std::endl;
		return new B();
	}
	case 3:
	{
		std::cout << "Generate C" << std::endl;
		return new C();
	}
	default:
		break;
	}
	return (NULL);
}

void	identify(Base* p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
	else
		std::cout << "Conversion Error" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch(const std::exception &e)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch(const std::exception &e)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch(const std::exception &e)
	{
	}
}

int	main()
{
	Base	*a;
	Base	*b;
	Base	*c;

	a = generate();
	b = generate();
	c = generate();

	identify(*a);
	identify(a);

	identify(*b);
	identify(b);

	identify(*c);
	identify(c);

	delete a;
	delete b;
	delete c;
}
