/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:30 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/08 19:51:35 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkv(char c, va_list arg)
{
	size_t	count;
	size_t	v;

	count = 0;
	if (c == 'c')
	{
		v = va_arg (arg, int);
		count += write (1, &v, 1);
	}
	else if (c == 'i' || c == 'd')
		count += ft_printnbr (va_arg (arg, int));
	else if (c == '%')
		count += write (1, &c, 1);
	else if (c == 'u')
		count += ft_printnbr_u (va_arg (arg, unsigned int));
	else if (c == 's')
		count += ft_putstr (va_arg (arg, char *));
	else if (c == 'p')
		count += ft_printp(va_arg (arg, unsigned long int));
	else if (c == 'x' || c == 'X')
		count += ft_printhexa (va_arg (arg, unsigned int), c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start (arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += checkv (str[i], arg);
		}
		else
		{
			write(1, &str[i], 1);
			count++;
		}
	i++;
	}
	va_end (arg);
	return (count);
}
/*#include <stdio.h>
int main()
{
	ft_printf(" %d ", -42);
	printf(" %d ", -42);
}*/
