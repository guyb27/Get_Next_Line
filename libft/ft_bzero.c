/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bzero.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:28:36 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 23:24:34 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = '\0';
		i++;
	}
}
