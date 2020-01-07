/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:45:49 by dcyprien          #+#    #+#             */
/*   Updated: 2019/11/18 17:08:52 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*i;
	int		count;

	count = 0;
	i = lst;
	if (lst == NULL)
		return (0);
	while (i->next != NULL)
	{
		i = i->next;
		count++;
	}
	count++;
	return (count);
}
