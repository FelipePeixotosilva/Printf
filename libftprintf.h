/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:40 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/03 21:05:29 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int     ft_printf(const char *s, ...);
void    ft_printnbr(int nbr);
void    ft_printnbr_u(unsigned int nbru);
void    ft_putstr(char *s);
void    printhexa_l(unsigned int nbr);
void    printhexa_u(unsigned int nbr);
void    ft_endpointer(unsigned long int nbr);

#endif
