/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_of_rank.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:49:35 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 11:15:50 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../Push_Swap.h"

// int	*ft_create_tab_rank(long long *tab, int *new_tab, char **argv, int argc)
// {
// 	new_tab = malloc(ft_len_tab(argv, argc) * sizeof(int));
// 	if (new_tab == NULL)
// 		exit(1);
// 	new_tab = tab_test(tab, new_tab, argv, argc);
// 	if (new_tab == NULL)
// 		exit(1);
// 	return (new_tab);
// }

// int	*tab_test(long long *tab, int *new_tab, char **argv, int argc)
// {
// 	int	min;
// 	int	i;
// 	int	j;
// 	int	a;
// 	int	indices;

// 	i = 0;
// 	j = 0;
// 	// while ((tab[j] == INT_FALSE) && (j < ft_len_tab(argv, argc)))
// 	// 	j++;
// 	while (i < ft_len_tab(argv, argc))
// 	{
// 		min = tab[0];
// 		j = 0;
// 		while (j < ft_len_tab(argv, argc))
// 		{
// 			if (min > tab[j] && tab[j] != INT_FALSE)
// 			{
// 				indices = j;
// 				tab[j] = INT_FALSE;
// 			}
// 			j++;
// 		}
// 		new_tab[indices] = a;
// 		a++;
// 		i++;
// 	}
// }
