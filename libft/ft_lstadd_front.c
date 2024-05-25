/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:13:33 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/25 11:22:54 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return (0);
    new->next = *lst;
    *lst = new;
}