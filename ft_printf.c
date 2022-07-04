/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:30 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 21:13:23 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void checkV(char c, va_list arg)
{
    int v;
    char *ptr;
    if(c == 'c')
    {
        v = va_arg(arg,int);
        write(1,&v,1);   
    }
    else if(c == 'i' || c == 'd')
    {
        ft_printnbr(va_arg(arg,int));
    }
    else if(c == '%')
    {
        v = va_arg(arg,int);
        write(1,&v,1);
    }
    else if(c == 'u')
    {
        ft_printnbr_u(va_arg(arg,unsigned int));
    }
    else if(c == 's')
    {
        ft_putstr(va_arg(arg,char *));
    }
    else if(c == 'p')
    {
        write(1,"0x",3);
        ft_endpointer(va_arg(arg,unsigned long int));
    }
    else if(c == 'x')
    {
        printhexa_l(va_arg(arg,unsigned int));
    }
    else if(c == 'X')
    {
        printhexa_u(va_arg(arg,unsigned int));
    }
    
}
int ft_printf(const char *str, ...)
{
    va_list arg;
    size_t i;

    i   =   0;
    va_start(arg,str);
    
    while(str[i])
    {
        if(str[i] == '%')
        {
            i++;
            checkV(str[i],arg);
        }
        else
        {
            write(1,&str[i],1);
        }
        i++;
    }
    va_end(arg);
    return (int)i;
}
#include <stdio.h>
int main()
{
    char letter = 'J';
    int  val = 10;
    char *ptr = "testando";
    ft_printf("%p\n",ptr);
    printf("Ess.a aqui e a original: %p\n",ptr);
    return 0;
}
