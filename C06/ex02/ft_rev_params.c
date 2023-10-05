/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recherra <recherra@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 11:19:43 by recherra          #+#    #+#             */
/*   Updated: 2023/09/28 11:56:38 by recherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	while (ac > 1)
	{
		i = 0;
		while (av[ac - 1][i])
		{
			write(1, &av[ac - 1][i], 1);
			i++;
		}
		ac--;
		write(1, "\n", 1);
	}
	return (0);
}