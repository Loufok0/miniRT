/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:46:34 by ylabussi          #+#    #+#             */
/*   Updated: 2025/05/14 14:40:24 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!del || !lst || !*lst)
		return ;
	ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
