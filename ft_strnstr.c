/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:58:45 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/10 16:21:52 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t lenneedle;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	lenneedle = ft_strlen(needle);
	while (haystack[i] != '\0' && (i + lenneedle) <= len)
	{
		j = 0;
		if (haystack[i] == needle[j] && i + lenneedle <= len)
		{
			if (ft_strncmp(&haystack[i], needle, lenneedle) == 0)
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
