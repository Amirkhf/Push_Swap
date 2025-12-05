/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_of_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 13:04:42 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/05 16:43:55 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

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
			j++;	return (len);

		}
		free_function(str);
		i++;
	}
	return (len);
}

int	*ft_new_tab(int argc, char **argv, int *tab)
{
	int		i;
	char	**str;

	i = 1;
	tab = malloc(ft_len_tab(argv, argc) * sizeof(int));
	if (tab == NULL)
		return (0);
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		if (str == NULL)
			return (NULL);
		tab = ft_remplissage(tab, str);
		free_function(str);
		i++;
	}
	return (tab);
}

int	*ft_remplissage(int *tab, char **str)
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