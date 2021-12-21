/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erenae <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:49:38 by erenae            #+#    #+#             */
/*   Updated: 2021/10/11 13:04:17 by erenae           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

int		ft_strlen(char const *str);
int		ft_isdigit(int digit);
int		ft_isalpha(int symbol);
int		ft_isalnum(int symbol);
int		ft_isascii(int symbol);
int		ft_isprint(int symbol);
int		ft_tolower(int symbol);
int		ft_toupper(int symbol);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *string2, const void *string1, size_t bytesnum);
int		ft_strncmp( const char *string1, const char *string2, size_t num);

char	*ft_itoa(int n);
char	*ft_strdup(const char *string1);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *string, int symbol);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strrchr(const char *str, int findsymbol);
char	*ft_strnstr(const char *string1, const char *string2, size_t num);
char	*ft_substr(char const *string1, unsigned int start, size_t length);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_bzero(void *str, size_t bytes);
void	*ft_calloc(size_t num, size_t size);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memset(void *string1, int symbol, size_t bytesnum);
void	*ft_memchr(const void *string1, int symbol, size_t size);
void	*ft_memcpy(void *string2, const void *string1, size_t bytesnum);
void	*ft_memmove(void *string2, const void *string1, size_t bytesnum);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
