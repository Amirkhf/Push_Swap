/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:32:02 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 14:41:19 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

t_stack	*ft_create_list(int *tab, int len_tab, t_stack **lst)
{
	int		i;
	t_stack	*new;

	i = 0;
	while (i < len_tab)
	{
		new = ft_lstnew(tab[i]);
		ft_lstadd_back(lst, new);
		if (!lst)
			exit(1);
		i++;
	}
	return (*lst);
}
