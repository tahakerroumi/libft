/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkerroum < tkerroum@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:42:48 by tkerroum          #+#    #+#             */
/*   Updated: 2024/05/25 15:54:38 by tkerroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft_bonus.h"

t_list *ft_lstlast(t_list *lst)
{   
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst); 
}
// int main()
// {
//     char *p = "taha";
//     char *a = "ayoub";
//     char *s = "simo";
//     t_list* vogue =  malloc(sizeof(t_list));   
//     t_list* o = malloc(sizeof(t_list));
//     t_list* d = malloc(sizeof(t_list));
    
//     vogue->content = p;
//     o->content = a;
//     d->content = s;

//     vogue->next = o;
//     o->next = d;
//     d->next = NULL;

//     t_list* y = ft_lstlast(vogue);
//     printf("%s",(char *)y->content);
// }