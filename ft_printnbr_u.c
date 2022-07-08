/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:23:30 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/08 16:53:21 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_countc(unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		i++;
	}
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

size_t	ft_printnbr_u(unsigned int nbru)
{
	char	cnbr;

	if (nbru < 10)
	{
		cnbr = nbru + '0';
		write(1, &cnbr, 1);
	}
	else
	{
		ft_printnbr_u(nbru / 10);
		ft_printnbr_u(nbru % 10);
	}
	return (ft_countc(nbru));
}
