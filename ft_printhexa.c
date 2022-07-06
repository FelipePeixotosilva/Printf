/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:08:47 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/05 21:49:06 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_printhexa(unsigned int nbr,char c)
{
    char cnbr;
    static size_t i;
    
    i = 0;
    if(nbr >= 0 && nbr <= 9)
    {
        cnbr = nbr + '0';
        i = i + write(1,&cnbr,1);    
    }
    else if(nbr >= 10 && nbr <= 15)
    {
        if(c == 'x')
            cnbr = nbr + 87;
        else
            cnbr = nbr + 55;
            
        i = i + write(1,&cnbr,1);        
    }
    else
    {
        ft_printhexa(nbr / 16,c);
        ft_printhexa(nbr % 16,c);
    }
    return i;
}
