/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:57:27 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/12 16:17:18 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *tmp;

	temp = *lst;
	while (temp)
	{
		tmp = temp->next;
		del(temp->content);
		free(temp);
		temp = tmp;
	}
	*lst = NULL;
}
