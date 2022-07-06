/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:09:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/05 21:42:18 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_printnbr(int nbr)
{
    char cnbr;
    static size_t i;

    i = 0;
    if (nbr < 0)
    {
        write(1,"-",1);
        nbr = nbr * -1;
        i++;
    }
    if(nbr < 10)
    {
        cnbr = nbr + '0';
        write(1,&cnbr,1);
        i++;
    }
    else 
    {
        ft_printnbr(nbr/10);
        ft_printnbr(nbr%10);
    }
    return i;
}
