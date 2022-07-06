/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 18:34:53 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/05 21:10:37 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_putstr(char *s)
{
    size_t i;

    i = 0;
    if(s == NULL)
    {
        write(1,"(null)",6);
        return 6;
    }
    while (s[i])
    {
        write(1,&s[i],1);
        i++;
    }
    return i;
}
