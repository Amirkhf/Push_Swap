/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:44:52 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 13:09:48 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

t_stack	*ft_lstnew(t_stack *new, int value)
{
	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack *temp;

	if (!lst || !new) // si un des deux elements nexiste pas
		exit(1);
	if (*lst == NULL) // si la liste est vide
	{
		*lst = new;
		return ;
	}
	temp = *lst; // copie de lst
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return ;
}