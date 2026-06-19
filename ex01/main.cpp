/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:15:35 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 20:04:38 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap("Clappy");
	ScavTrap	scav("Serena");
	ScavTrap	copy_scav = scav;
	ScavTrap	assigned_scav;

	assigned_scav = scav;

	clap.attack("target dummy");
	scav.attack("target dummy");
	copy_scav.attack("target dummy");
	assigned_scav.attack("target dummy");

	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	copy_scav.takeDamage(100);
	copy_scav.attack("target dummy");
	copy_scav.beRepaired(10);

	int	i = 0;
	while (i < 50)
	{
		assigned_scav.attack("target dummy");
		i++;
	}

	assigned_scav.attack("target dummy");
	assigned_scav.beRepaired(10);
	assigned_scav.guardGate();

	return (0);
}
