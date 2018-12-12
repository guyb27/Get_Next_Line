/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/10 00:59:58 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2018/02/08 02:46:29 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft/includes/libft.h"

# define BUFF_SIZE 10
# define CHECK(x, y) if (!x) return (y)
# define STR now->str_lst.str
# define LEN(x) ft_strlen(x)

int			get_next_line(const int fd, char **line);

#endif
