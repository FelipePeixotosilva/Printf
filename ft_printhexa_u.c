/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:59:50 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 20:04:49 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void printhexa_u(unsigned int nbr)
{
    char cnbr;
    
    if(nbr >= 0 && nbr <= 9)
    {
        cnbr = nbr + '0';
        write(1,&cnbr,1);    
    }
    else if(nbr >= 10 && nbr <= 15)
    {
        cnbr = nbr + 55;
        write(1,&cnbr,1);        
    }
    else
    {
        printhexa_u(nbr/16);
        printhexa_u(nbr%16);
    }
}

