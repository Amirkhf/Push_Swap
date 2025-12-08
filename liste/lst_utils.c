/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amkhelif <amkhelif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 12:44:52 by amkhelif          #+#    #+#             */
/*   Updated: 2025/12/08 14:45:55 by amkhelif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Push_Swap.h"

void	ft_afficher(t_stack **lst)
{
	t_stack	*temp;

	temp = *lst; // copie de lst
	while (temp->next != NULL)
	{
		printf("%d  ", temp->value);
		temp = temp->next;
	}
	printf("%d", temp->value);
}

t_stack	*ft_lstnew(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*temp;

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

void	ft_function_free(long long *tab, int *new_tab, t_stack **lst)
{
	free(tab);
	free(new_tab);
	free(lst);
}
