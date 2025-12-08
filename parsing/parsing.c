/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:39:20 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 11:51:11 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

int	ft_verif_tab_trier(long long *tab, char **argv, int argc)
{
	int	len_tab;
	int	i;

	len_tab = ft_len_tab(argv, argc);
	i = 0;
	if (len_tab < 2)
		return (1);
	while (i < len_tab - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_verif_doublon(long long *tab, char **str)
{
	int	i;
	int	value;
	int	j;
	int	verif;

	verif = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		value = tab[i];
		while (tab[j])
		{
			if (value == tab[j] && j != i)
				verif = 1;
			j++;
		}
		i++;
	}
	if (verif == 1)
		return (free(tab), free_function(str), write(1, "Error\n", 6), exit(1),
			0);
	return (0);
}

int	ft_check_arguments(char **argv)
{
	int			i;
	char		**str;
	long long	nb;

	i = 1;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		if (str == NULL)
			return (free_function(str), 1);
		if (ft_sign_check(str))
			return (free_function(str), 1);
		if (ft_check_limits(str))
			return (free_function(str), 1);
		free_function(str);
		i++;
	}
	return (0);
}
int	ft_check_limits(char **str)
{
	int			i;
	int			j;
	long long	nb;

	nb = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_strlen(str[i]) > 11)
			return (write(1, "Error\n", 6), exit(1), 1);
		nb = ft_atoi(str[i]);
		if (nb < INT_MIN)
			return (1);
		if (nb > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}

int	ft_sign_check(char **str)
{
	int	i;
	int	count;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		count = 0;
		while (str[i][j])
		{
			if (str[i][j] == '-' && str[i][j + 1] == '\0')
				return (1);
			if (str[i][j] == '-')
				count++;
			if (count > 1 || str[i][j] == '+')
				return (1);
			if (!(str[i][j] >= '0' && str[i][j] <= '9') && str[i][j] != '-')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
