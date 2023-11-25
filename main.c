/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrause <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:56:11 by ekrause           #+#    #+#             */
/*   Updated: 2023/11/25 10:56:13 by ekrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	char	c = 'F';
	char	*s = "";
	void	*p = 0;
	int		d = 546;
	int		i = 50;
	int		u = 4294967295;
	int		x = 45645;
	int		X = 45645;

	ft_printf("ft_printf: %c\n", c);
	printf("printf: %c\n\n", c);

	ft_printf("ft_printf: %s\n", s);
	printf("printf: %s\n\n", s);

	ft_printf("ft_printf: %p\n", p);
	printf("printf: %p\n\n", p);

	ft_printf("ft_printf: %d\n", d);
	printf("printf: %d\n\n", d);
    
	ft_printf("ft_printf: %i\n", i);
	printf("printf: %i\n\n", i);

	ft_printf("ft_printf: %u\n", u);
	printf("printf: %u\n\n", u);

	ft_printf("ft_printf: %x\n", x);
	printf("printf: %x\n\n", x);

	ft_printf("ft_printf: %X\n", X);
	printf("printf: %X\n\n", X);
	return (0);
}
