/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <mchernyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:10:52 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/10 16:31:56 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_space(char *str);

int ft_atoi(const char *str)
{
    int s;
    int n;
	int i;

    s = 1;
    n = 0;
	i = 0;
    while (is_space((char *)str) == 1)
        str++;
    if (*str == '-' || *str == '+')
    {
		if (*str == '-')
			s *= -1;
        str++;
	}
    while ((ft_isdigit(*str) == 1) && (*str != '\0'))
    {
        n = (n * 10) + (*str - '0');
        str++;
    }
    return (s * n);
}

static int is_space(char *str)
{
    if ((*str == ' ') || (*str == '\f') || (*str == '\n'))
        return (1);
    if ((*str == '\r') || (*str == '\t') || (*str == '\v'))
        return (1);
    else
        return (0);
}
