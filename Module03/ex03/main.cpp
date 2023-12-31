/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdi-paol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 00:29:48 by mdi-paol          #+#    #+#             */
/*   Updated: 2023/08/04 17:47:32 by mdi-paol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap c("mdi_paol");
	FragTrap wow("fantastic");
	ScavTrap mdipaol("mdipaol");
	ClapTrap user42("user42");

	c.whoAmI();
	mdipaol.attack("lol");
	wow.attack("boh");
	wow.highFivesGuy();
	mdipaol.guardGate();
	user42.attack("mdi-paol");
	for (int i = 0; i < 50; i++)
		mdipaol.beRepaired(10);
	mdipaol.takeDamage(5);
}
