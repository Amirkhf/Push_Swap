/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:39:34 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/05 18:50:44 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_Swap.h"

int	main(int argc, char **argv)
{
	int	*tab;

	if (ft_check_arguments(argv) == 1)
		return (write(1, "Error\n", 6), 0);
	tab = ft_new_tab(argc, argv, tab);
	if (tab == NULL)
		return (0);
	for (int a = 0; tab[a]; a++)
	{
		printf("%d", tab[a]);
	}
	free(tab);
	// appeler une function qui change les veleut de notre tableau par leur rank
	// appeler une function qui transfor;e nmotre tableau en lst
	// appeler la function qui trrie
	return (0);
}
