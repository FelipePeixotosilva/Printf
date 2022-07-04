/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:09:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/04 18:19:00 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printnbr(int nbr)
{
    char cnbr;
    if (nbr < 0)
    {
        write(1,"-",1);
        nbr = nbr * -1;
    }
    if(nbr < 10)
    {
        cnbr = nbr + '0';
        write(1,&cnbr,1);
    }
    else 
    {
        ft_printnbr(nbr/10);
        ft_printnbr(nbr%10);
    }
}
