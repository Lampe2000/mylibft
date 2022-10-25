/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisbah <hmisbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:46:05 by hmisbah           #+#    #+#             */
/*   Updated: 2022/10/22 02:25:40 by hmisbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
// #include <stdio.h>
// void	f(unsigned int pos, char *c)
// {
// 	*c = pos + '0';
// }
// int		main(void)
// {
// 	char str[] = "sooooooouu";
// 	ft_striteri(str, f);
// 	printf("%s\n",str);	
// }