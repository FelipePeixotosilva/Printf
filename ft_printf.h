/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:40 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/06 19:08:57 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


int     ft_printf(const char *s, ...);
size_t  ft_printnbr(int nbr);
size_t    ft_printnbr_u(unsigned int nbru);
size_t    ft_putstr(char *s);
size_t    ft_printhexa(unsigned int nbr, char c);
void    ft_endpointer(unsigned long int nbr);

#endif
