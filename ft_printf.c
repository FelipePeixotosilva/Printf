/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:30 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/07 00:16:58 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	checkv(char c, va_list arg)
{
	int	v;
	int count;

	count = 0;
	if (c == 'c')
	{
		v = va_arg (arg, int);
		write (1, &v, 1);
		count++;
	}	
	else if (c == 'i' || c == 'd')
		count +=ft_printnbr (va_arg (arg, int));
	else if (c == '%')
	{
		write (1, &c, 1);
		count++;
	}
	else if (c == 'u')
		count += ft_printnbr_u (va_arg (arg, unsigned int));
	else if (c == 's')
		count +=ft_putstr (va_arg (arg, char *));
	else if (c == 'p')
	{
		//count +=  write (1, "0x", 2);
		count +=ft_endpointer (va_arg (arg, unsigned long int));
	}
	else if (c == 'x' || c == 'X')
		count += ft_printhexa (va_arg (arg, unsigned int), c);
	return count;
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int count;

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
	//ft_printf(" %p %p \n", 0, 0);
	printf(" %p %p ", 0, 0);
}*/
