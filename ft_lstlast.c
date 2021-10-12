/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:20:45 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/11 20:14:24 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *current;

	current = lst;
	if (lst == NULL)
		return (NULL);
	while(current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
