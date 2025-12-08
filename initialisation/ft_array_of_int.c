/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_of_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:04:42 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 11:51:02 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

long long	*ft_new_tab(int argc, char **argv, long long *tab)
{
	int		i;
	char	**str;

	i = 1;
	tab = malloc(ft_len_tab(argv, argc) * sizeof(long long));
	if (tab == NULL)
		return (0);
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		if (str == NULL)
			return (NULL);
		tab = ft_remplissage(tab, str);
		ft_verif_doublon(tab, str);
		free_function(str);
		i++;
	}
	if (ft_verif_tab_trier(tab, argv, argc))
		return (0);
	return (tab);
}



int	ft_len_tab(char **argv, int argc)
{
	int		i;
	int		len;
	int		j;
	char	**str;

	len = 0;
	i = 1;
	while (i < argc)
	{
		str = ft_split(argv[i], ' ');
		if (str == NULL)
			return (0);
		j = 0;
		while (str[j] != NULL)
		{
			len++;
			j++;
		}
		free_function(str);
		i++;
	}
	return (len);
}

long long	*ft_remplissage(long long *tab, char **str)
{
	int i;
	static int j = 0;

	i = 0;
	while (str[i])
	{
		tab[j] = ft_atoi(str[i]);
		i++;
		j++;
	}
	return (tab);
}