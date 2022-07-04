/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:08:47 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 23:30:12 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void printhexa(unsigned int nbr,char c)
{
    char cnbr;
    
    if(nbr >= 0 && nbr <= 9)
    {
        cnbr = nbr + '0';
        write(1,&cnbr,1);    
    }
    else if(nbr >= 10 && nbr <= 15)
    {
        if(c == 'x')
            cnbr = nbr + 87;
        else
            cnbr = nbr + 55;
            
        write(1,&cnbr,1);        
    }
    else
    {
        printhexa(nbr/16,c);
        printhexa(nbr%16,c);
    }
}
