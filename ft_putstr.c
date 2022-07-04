/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:40 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/04 19:06:41 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int     ft_printf(const char *s, ...);
void    ft_printnbr(int nbr);
void    ft_printnbr_u(unsigned int nbru);
size_t    ft_putstr(char *s);
void    ft_printhexa(unsigned int nbr, char c);
void    ft_endpointer(unsigned long int nbr);

#endif
