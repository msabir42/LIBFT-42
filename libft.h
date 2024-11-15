#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);
void				ft_bzero(void *s, int n);
void				*calloc(size_t count, size_t size);
int					ft_isalnum(int i);
int					ft_isalpha(int i);
int					ft_isdigit(int i);
int					ft_isprint(int i);
void				ft_putchar_fd(char c, int fd);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *to, const void *from, int len);
void				*ft_memmove(void *to, const void *from, int len);
void				*ft_memset(void *s, int b, size_t len);
char				*ft_strchr(const char *str, int search_str);
char				*strdup(const char *s1);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);
char				*ft_strrchr(const char *str, int search_str);
char				*ft_tolower(char *s);
char				*ft_toupper(char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_putnbr_fd(int n, int fd);
t_list				*ft_lstnew(void *content);
void				ft_lstclear(t_list **lst, void (*del)(void *));
char				*ft_strdup(const char *s1);

#endif
