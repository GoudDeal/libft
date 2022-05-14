/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:59:35 by dcyprien          #+#    #+#             */
/*   Updated: 2022/05/14 03:10:54 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	if (s != NULL)
	{
		while (*s)
		{
			if (*s == c)
				result = (char *)s;
			else
				result = result;
			s++;
		}
		if (c == '\0')
			result = (char *)s;
		else
			result = result;
	}
	return (result);
}
