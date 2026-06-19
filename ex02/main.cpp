/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:15:35 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 20:19:15 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Clappy");
	ScavTrap	scav("Serena");
	FragTrap	frag("Fraggy");
	FragTrap	copy_frag = frag;
	FragTrap	assigned_frag;

	assigned_frag = frag;

	clap.attack("target dummy");

	scav.attack("target dummy");
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	frag.attack("target dummy");
	frag.takeDamage(40);
	frag.beRepaired(20);
	frag.highFivesGuys();

	copy_frag.attack("target dummy");
	copy_frag.takeDamage(100);
	copy_frag.attack("target dummy");
	copy_frag.beRepaired(10);
	copy_frag.highFivesGuys();

	assigned_frag.attack("target dummy");
	assigned_frag.highFivesGuys();

	int	i = 0;
	while (i < 100)
	{
		assigned_frag.attack("target dummy");
		i++;
	}

	assigned_frag.attack("target dummy");
	assigned_frag.beRepaired(10);
	assigned_frag.highFivesGuys();

	return (0);
}
