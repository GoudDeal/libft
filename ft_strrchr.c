/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:59:35 by dcyprien          #+#    #+#             */
/*   Updated: 2020/01/07 08:48:10 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *result;

	result = NULL;
	if (s != NULL)
	{
		while (*s)
		{
			result = (c == *s) ? (char*)s : result;
			s++;
		}
		result = (c == '\0') ? (char*)s : result;
	}
	return (result);
}
