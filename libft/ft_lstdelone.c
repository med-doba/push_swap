/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: med-doba <med-doba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:22:00 by med-doba          #+#    #+#             */
/*   Updated: 2022/06/07 19:22:14 by med-doba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*del(t_list *lst)
{
	free(lst->content);
	return (NULL);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
}
