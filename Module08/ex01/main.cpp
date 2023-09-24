/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:05:59 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/09/24 17:30:27 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	other_test()
{
	std::cout << std::endl << "---- Iterator Test: ----\n" << std::endl;
	int test[] = {1, 3, 5, 7, 9, 11, 13, 15};
	std::vector<int> test_vector(test, test + sizeof(test) / sizeof(test[0]));
	Span	test_span(8);
	test_span.addNumber(test_vector.begin(), test_vector.end());
	for(std::vector<int>::iterator it = test_vector.begin(); it != test_vector.end(); ++it)
		std::cout << *it << "|";
	std::cout << std::endl;
	std::cout << "Longest Span: " << test_span.longestSpan() << std::endl;
	std::cout << "Shortest span: " << test_span.shortestSpan() << std::endl;
	std::cout << std::endl << "---- Error Test: ----\n" << std::endl;
	try
	{
		int test[] = {1};
	std::vector<int> test_vector(test, test + sizeof(test) / sizeof(test[0]));
	Span	test_span(1);
	test_span.addNumber(test_vector.begin(), test_vector.end());
	for(std::vector<int>::iterator it = test_vector.begin(); it != test_vector.end(); ++it)
		std::cout << *it << "|";
	std::cout << std::endl;
	std::cout << "Longest Span: " << test_span.longestSpan() << std::endl;
	std::cout << "Shortest span: " << test_span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}

int	main()
{
	try
	{
		unsigned int max_vector;
		std::cout << "How big do you want the vector to be?" << std::endl;
		std::cin >> max_vector;
		int data;
		std::vector<int> vec;
		std::cout << "Insert the numbers" << std::endl;
		Span	span(max_vector);
		for (int i = 0; i < static_cast<int>(max_vector); i++)
		{
			std::cin >> data;
			vec.push_back(data);
			span.addNumber(data);
		}
		for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << "|";
		std::cout << std::endl;
		std::cout << "Longest Span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	other_test();
}
