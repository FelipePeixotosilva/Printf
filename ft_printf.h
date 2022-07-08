/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:43:40 by fpeixoto          #+#    #+#             */
/*   Updated: 2022/07/08 19:50:48 by fpeixoto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_putstr(char *s);
size_t	ft_printp(unsigned long int n);
size_t	ft_printhexa(unsigned int nbr, char c);
size_t	ft_printnbr(int nbr);
size_t	ft_printnbr_u(unsigned int nbru);
int		ft_printf(const char *str, ...);

#endif
