/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum <tkerroum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:42:48 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/25 11:54:21 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstlast(t_list *lst)
{   
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst); 
}
int main()
{
    char *p = "taha";
    char *a = "kerroumi";
    char *s = "simo";
    t_list vogue =  ft_lstnew(p);
    
}