/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rexposit <rexposit@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/19 13:15:35 by rexposit          #+#    #+#             */
/*   Updated: 2026/06/19 14:16:19 by rexposit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	default_bot;
	ClapTrap	named_bot("Serena");
	ClapTrap	copy_bot = named_bot;
	ClapTrap	assigned_bot;

	assigned_bot = named_bot;
	assigned_bot.attack("target dummy");

	default_bot.attack("target dummy");
	named_bot.attack("target dummy");
	copy_bot.attack("target dummy");

	default_bot.takeDamage(1);
	named_bot.takeDamage(1);
	copy_bot.takeDamage(1);

	default_bot.beRepaired(1);
	named_bot.beRepaired(1);
	copy_bot.beRepaired(1);

	int	i = 0;
	while (i < 9)
	{
		default_bot.attack("target dummy");
		named_bot.attack("target dummy");
		copy_bot.attack("target dummy");
		i++;
	}

	default_bot.beRepaired(1);
	named_bot.beRepaired(1);
	copy_bot.beRepaired(1);

	default_bot.takeDamage(10);
	named_bot.takeDamage(10);
	copy_bot.takeDamage(10);

	default_bot.attack("target dummy");
	named_bot.attack("target dummy");
	copy_bot.attack("target dummy");

	default_bot.beRepaired(1);
	named_bot.beRepaired(1);
	copy_bot.beRepaired(1);

	return (0);
}
