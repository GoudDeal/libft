/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:29:41 by dcyprien          #+#    #+#             */
/*   Updated: 2019/11/19 10:50:50 by dcyprien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	i = *lst;
	while (i)
	{
		del(i->content);
		tmp = i->next;
		free(i);
		i = tmp;
	}
	*lst = NULL;
}
