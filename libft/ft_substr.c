/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmisbah <hmisbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:58:44 by hmisbah           #+#    #+#             */
/*   Updated: 2022/10/24 20:37:58 by hmisbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (s)
	{
		if (start > ft_strlen(s))
			return (ft_strdup(""));
		str = (char *)malloc(sizeof(char) * len + 1);
		if (!str)
			return (NULL);
		i = 0;
		while (i < len)
		{
			str[i] = (char)s[start + i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	str = NULL;
	return (str);
}
