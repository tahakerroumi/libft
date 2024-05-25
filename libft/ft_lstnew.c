/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:29:41 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/25 11:13:07 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
       t_list*  ptr;
       
       ptr = (t_list*)malloc(sizeof(t_list));
       if (!ptr)
              return (free(ptr),0);
       ptr->content = content;
       ptr->next = NULL;
       
}
