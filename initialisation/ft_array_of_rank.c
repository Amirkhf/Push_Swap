/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_of_rank.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:49:35 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/05 20:28:55 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

int	*ft_create_tab_rank(long long *tab, int *new_tab, char **argv, int argc)
{
	int	i;
	int	j;
	int	a;
	int	min;
	int	indices;

	i = 0;
	j = 0;
	a = 0;
	new_tab = malloc(ft_len_tab(argv, argc) * sizeof(int));
	if (new_tab == NULL)
	{
		printf("error");
		exit(1);
	}
	while (i < ft_len_tab(argv, argc))
	{
		min = tab[i];
		j = 0;
		while (tab[j])
		{
			if (min < tab[j] && tab[j] != 1789 && min != 1789)
			{
				indices = j;
				tab[i] = 1789;
			}
			j++;
		}
		if (verif_tab_finich(tab, argv, argc))
			return (free(tab), new_tab);
		else
		{
			tab[indices] = a;
			a++;
		}
		i++;
	}
	return (new_tab);
}
int	verif_tab_finich(long long *tab, char **argv, int argc)
{
	int	i;

	i = 0;
	while (i < ft_len_tab(argv, argc))
	{
		if (tab[i] != 1789)
			return (0);
		i++;
	}
	return (1);
}
// {
// 	int *new_tab;
// 	int i;
// 	int min;
// 	int indice;
// 	int j;
// 	int rank;

// 	rank = 0;
// 	j = 0;
// 	i = 0;
// 	new_tab = malloc(ft_len_tab(argv, argc) * sizeof(int));
// 	if (new_tab == NULL)
// 		exit(1);
// 	indice = i;
// 	while (tab[i] < ft_len_tab(argv, argc))
// 	{
// 		min = tab[i];
// 		j = 0;
// 		while (tab[j] < ft_len_tab(argv, argc))
// 		{
// 			if (min > tab[j] && tab[j] != 12345678998765)
// 			{
// 				tab[i] = 12345678998;
// 				min = tab[j];
// 				indice = j;
// 			}
// 			j++;
// 		}
// 		for (int i = 0; i < ft_len_tab(argv, argc); i++)
// 		{
// 			printf("%d\n", tab[i]);
// 		}

// 		new_tab[indice] = rank;
// 		rank++;
// 		i++;
// 	}
// 	return (new_tab);
// }