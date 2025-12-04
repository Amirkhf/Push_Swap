/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:39:20 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/04 14:03:54 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

// int	ft_check_arguments(char **argv)
// {
// 	int			i;
// 	char		**str;
// 	long long	nb;

// 	i = 1;
// 	while (argv[i])
// 	{
// 		str = ft_split(argv[i], ' ');
// 		if (str == NULL)
// 			return (1);
// 		if (ft_sign_check(str)) // verifie si on a pas trop de sign "--142"
// 			return (printf("ntm"), 1);
// 		if (test(str))
// 			return (printf("ERREUR"), 1);
// 		// verifie si on a pas de char dans le str
// 		i++;
// 	}
// 	return (0);
// }
int	test(char **str)
{
	int			i;
	int			j;
	long long	nb;

	nb = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		nb = ft_atoi(str[i]);
		if (nb < INT_MIN)
			return (printf("trop petit"), 1);
		if (nb > INT_MAX)
			return (printf("trop grand"), 1);
		i++;
	}
	return (0);
}
int	main(void)
{
	char	*fake_split[] = {"42", "0", "-12", "21474836496", NULL};

	printf("%d", test(fake_split));
	return (0);
}
// int	ft_sign_check(char **str)
// {
// 	int	i;
// 	int	count;
// 	int	j;

// 	i = 0;
// 	while (str[i])
// 	{
// 		j = 0;
// 		count = 0;
// 		while (str[i][j])
// 		{
// 			if (str[i][j] == '-')
// 				count++;
// 			if (count > 1 || str[i][j] == '+')
// 				return (1);
// 			if (!(str[i][j] >= '0' && str[i][j] <= '9') && str[i][j] != '-')
// 				return (1);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }
