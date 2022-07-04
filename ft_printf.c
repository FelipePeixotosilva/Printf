/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:30 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/04 19:02:26 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	checkv(char c, va_list arg)
{
	int	v;

	if (c == 'c')
	{
		v = va_arg (arg, int);
		write (1, &v, 1);
	}	
	else if (c == 'i' || c == 'd')
		ft_printnbr (va_arg (arg, int));
	else if (c == '%')
		write (1, &c, 1);
	else if (c == 'u')
		ft_printnbr_u (va_arg (arg, unsigned int));
	else if (c == 's')
		ft_putstr (va_arg (arg, char *));
	else if (c == 'p')
	{
		write (1, "0x", 3);
		ft_endpointer (va_arg (arg, unsigned long int));
	}
	else if (c == 'x' || c == 'X')
		ft_printhexa (va_arg (arg, unsigned int), c);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	size_t	i;

	i = 0;
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			checkv (str[i], arg);

		}
		else
			write(1, &str[i], 1);
	i++;
	}
	va_end (arg);
	return ((int)i);
}
/*#include <stdio.h>
int main()
{
	ft_printf(" NULL %s NULL ", NULL);
	//printf(" NULL %s NULL ", NULL);
}*/
