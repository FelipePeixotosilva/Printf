/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:58:14 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/09 14:30:33 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_countc(unsigned long int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		i++;
	}
	else
	{
		while (n)
		{
			i++;
			n = n / 16;
		}
	}
	return (i);
}

size_t	ft_printp(unsigned long int nbr)
{
	char	cnbr;

	if (nbr < 10)
	{
		cnbr = nbr + '0';
		write(1, &cnbr, 1);
	}
	else if (nbr >= 10 && nbr <= 15)
	{
		cnbr = nbr + 87;
		write(1, &cnbr, 1);
	}
	else
	{
		ft_printp(nbr / 16);
		ft_printp(nbr % 16);
	}
	return (ft_countc(nbr));
}
