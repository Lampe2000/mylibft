/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisbah <hmisbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:01:01 by hmisbah           #+#    #+#             */
/*   Updated: 2022/10/23 06:29:25 by hmisbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*r;
	size_t	i;
	size_t	len;

	if (s)
	{
		len = ft_strlen(s);
		r = (char *)malloc(sizeof(char) * len + 1);
		if (!r)
			return (NULL);
		i = 0;
		while (i < len)
		{
			r[i] = (*f)(i, (char)s[i]);
			i++;
		}
		r[i] = '\0';
		return (r);
	}
	r = NULL;
	return (r);
}
// #include <stdio.h>
// char	f(unsigned int pos, char c)
// {
// 	c = pos + '0';
// 	return c;
// }
// int		main(void)
// {
// 	char str[] = "soouuuuuu";

// 	printf("%s\n", ft_strmapi(str, f));	
// }