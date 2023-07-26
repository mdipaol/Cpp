/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:29:48 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/07/27 00:55:27 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap wow("fantastic");
	ScavTrap mdipaol("mdipaol");
	ClapTrap user42("user42");

	mdipaol.attack("lol");
	wow.attack("boh");
	wow.highFivesGuy();
	mdipaol.guardGate();
	user42.attack("mdi-paol");
	for (int i = 0; i < 50; i++)
		mdipaol.beRepaired(10);
	mdipaol.takeDamage(5);
}
