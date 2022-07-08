/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 20:58:14 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/08 12:50:55 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t ft_countc(unsigned long int  n)
{
    size_t i;

    i = 0;
    if(n == 0)
    {
        i++;
    }
    else
    {
        while (n)
        {   
        i++;
        n = n / 16;
        }
    }
    return i;
}

static size_t ft_convp(unsigned long int nbr)
{
    char cnbr;
  
    if(nbr == 'x')
    {
        write(1,"x",1);
    }
    else if(nbr < 10)
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
        ft_convp(nbr/16);
        ft_convp(nbr%16);
    }
    return ft_countc(nbr);
}

size_t ft_endp(unsigned long int  n)
{
    
    if(n == 0)
		return write(1,"(nil)",5);
    else
        return write (1, "0x", 2) + ft_convp(n);

}
