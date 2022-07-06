/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:09:11 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/06 20:06:35 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t cchar(int n)
{
    size_t i;

    i = 0;
    if(n < 0)
    {
        i++;
        n = n * -1;
    }
    while (n)
    {   
        i++;
       n = n / 10; 
    }
    return i;
}
size_t ft_printnbr(int nbr)
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
    return cchar(nbr);
}
