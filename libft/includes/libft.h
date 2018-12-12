/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: gmadec <gmadec@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/10 01:19:24 by gmadec       #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 16:54:49 by gmadec      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_strlist
{
	char			*str;
}					t_strlist;

typedef	struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef	struct		s_list
{
	t_strlist		str_lst;
	t_pos			pos;
	struct s_list	*next;
}					t_list;

void				ft_bzero(void *s, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(const char *str);
char				*ft_strrchr(const char *s, int c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
void				ft_memdel(void **ap);
void				ft_strclr(char *s);
void				ft_strdel(char **as);
void				*ft_memset(void *s, int c, size_t n);

#endif
