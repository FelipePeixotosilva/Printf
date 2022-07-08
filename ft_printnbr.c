/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:09:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/08 13:20:09 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_countc(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

size_t	ft_printnbr(int nbr)
{
	char		cnbr;
	long int	n;
	size_t		countc;

	n = nbr;
	countc = ft_countc(n);
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		cnbr = n + '0';
		write(1, &cnbr, 1);
	}
	else
	{	
		ft_printnbr(n / 10);
		ft_printnbr(n % 10);
	}
	return (countc);
}
