/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 00:37:27 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 18:05:23 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*ret;
	char	*p;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(ret = (char*)malloc(len)))
		return (NULL);
	p = ret;
	s = (char*)s1;
	while (*(s++))
		*(p++) = *(s - 1);
	s = (char*)s2;
	while (*(s++))
		*(p++) = *(s - 1);
	*p = 0;
	return (ret);
}
