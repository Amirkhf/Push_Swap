/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_of_rank.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:49:35 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 12:14:48 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

int	*ft_create_tab_rank(long long *tab, int *new_tab, char **argv, int argc)
{
	new_tab = malloc(ft_len_tab(argv, argc) * sizeof(int));
	if (new_tab == NULL)
		exit(1);
	new_tab = ft_index_tab(tab, new_tab, argv, argc);
	if (new_tab == NULL)
		exit(1);
	return (new_tab);
}

int	*ft_index_tab(long long *tab, int *new_tab, char **argv, int argc)
{
	long long	min;
	int	i;
	int	a;
	int	indice;
	int	rank;

	rank = 0;
	i = 0;
	while (i < ft_len_tab(argv, argc))
	{
		min = tab[i];
		indice = i;
		a = 0;
		while (a < ft_len_tab(argv, argc))
		{
			if (min > tab[a])
			{
				min = tab[a];
				indice = a;
			}
			a++;
		}
		new_tab[indice] = rank;
		tab[indice] = INT_FALSE;
		rank++;
		i++;
	}
	return (new_tab);
}
