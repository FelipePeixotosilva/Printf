/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:58:14 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 21:10:59 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void ft_endpointer(unsigned long int nbr)
{
    char cnbr;
    
    if(nbr == 'x')
    {
        write(1,"x",1);
    }
    else if(nbr >= 0 && nbr <= 9)
    {
        cnbr = nbr + '0';
        write(1,&cnbr,1);    
    }
    else if(nbr >= 10 && nbr <= 15)
    {
        cnbr = nbr + 87;
        write(1,&cnbr,1);        
    }
    else
    {
        ft_endpointer(nbr/16);
        ft_endpointer(nbr%16);
    }
    
}


