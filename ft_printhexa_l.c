/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_l.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:08:47 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 19:30:25 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void printhexa_l(unsigned int nbr)
{
    char cnbr;
    
    if(nbr >= 0 && nbr <= 9)
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
        printhexa_l(nbr/16);
        printhexa_l(nbr%16);
    }
}
