/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:39:34 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 14:46:37 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_Swap.h"

int	main(int argc, char **argv)
{
	long long	*tab;
	int			*new_tab;
	int			len_tab;
	t_stack		*lst;

	lst = NULL;
	if (ft_check_arguments(argv) == 1)
		return (write(2, "Error\n", 6), 0);
	len_tab = ft_len_tab(argv, argc);
	tab = ft_new_tab(argc, argv, tab);
	if (tab == NULL)
		return (0);
	new_tab = ft_create_tab_rank(tab, new_tab, argv, argc);
	if (new_tab == NULL)
		return (0);
	lst = ft_create_list(new_tab, len_tab, &lst);
	if (!lst)
		return (0);
	ft_afficher(&lst);
	ft_function_free(tab,new_tab,&lst);
	return (0);
}
