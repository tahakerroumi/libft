/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:31:16 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/25 18:48:57 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list* current;
	t_list* nxt;
	
	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		nxt = current->next;
		del(current->content);
		free(current);
		current = nxt;
	}
	*lst = NULL;
}
