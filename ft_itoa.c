/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchernyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:37:33 by mchernyu          #+#    #+#             */
/*   Updated: 2021/10/11 11:38:42 by mchernyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int length(int n);
static char *ft_placement(char *s, int n, int length);

char *ft_itoa(int n)
{
	int i;
	char *result;
	int nbr;

	nbr = n;
	i =  length(n);
	result = ft_calloc(i + 1, 1);
	if (!result)
		return (NULL);
	if (nbr == -2147483648)
	{
		result[--i] = '8';
		nbr /= 10;
	}
	if (nbr < 0)
		nbr *= (-1);
	if (n < 0)
		result[0] = '-';
	if (nbr == 0)
		result[0] = '0';
	result = ft_placement(result, nbr, i);
	return (result);
}

static int length(int n)
{
	int i;
	
	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	while(n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char *ft_placement(char *s, int n, int length)
{
	while (n != 0)
	{
		s[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (s);
}
