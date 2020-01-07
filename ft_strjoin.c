/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:35:55 by dcyprien          #+#    #+#             */
/*   Updated: 2020/01/07 08:45:53 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*concat;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		if (!(concat = (char *)malloc((s1_len + s2_len + 1) * sizeof(char))))
			return (NULL);
		ft_strlcpy(concat, s1, s1_len + 1);
		ft_strlcat(concat, s2, s2_len + s1_len + 1);
		return (concat);
	}
	return (ft_strdup("\0"));
}
