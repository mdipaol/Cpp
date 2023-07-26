/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:29:48 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/26 18:44:06 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap mdipaol("mdipaol");

	mdipaol.attack("Damiano");
	for (int i = 0; i < 10; i++)
		mdipaol.beRepaired(10);
	mdipaol.takeDamage(5);
}
