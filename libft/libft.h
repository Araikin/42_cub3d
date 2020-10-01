/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asultanb <asultanb@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 16:11:39 by asultanb          #+#    #+#             */
/*   Updated: 2020/09/21 12:32:31 by asultanb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdarg.h>
# include <string.h>

# define BUFF_SIZE 32

# define MINUS	1
# define ZERO	2
# define PLUS	4
# define HASH	8
# define SPACE	16

# define L		1
# define LL		2
# define H		4
# define HH		8
# define UL		16

# define SPECS	"cspdDiouxXf%"

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct		s_format
{
	int				length : 5;
	int				flags : 5;
	int				prec;
	int				width;
	int				p_rem;
	int				w_rem;
	char			spec;
}					t_format;

/*
**	--------------------------- FT_PRINTF ----------------------------------
*/

typedef int			t_specifiers(va_list *argp, t_format *data);

int					ft_printf(const char *format, ...);
int					print_format(char c);
int					clear_format(t_format *data);
t_format			*initialize_format(void);

int					parse_format(va_list *argp, char *format, int *i);
void				set_params(va_list *argp, t_format *data, char *format,
								int *i);
char				*get_all_params(char *format, int i);
int					apply_params(va_list *argp, t_format *data);

void				set_flags(char *params, t_format *data, int *pos);
void				set_width(va_list *argp, char *params, t_format *data,
								int *pos);
void				set_precision(char *params, t_format *data, int *pos);
void				set_length(char *params, t_format *data, int *pos);
void				set_specifier(char *params, t_format *data, int *pos);

int					is_flag(char c);
int					is_specifier(char c);
int					is_digit(char c);
int					is_length(char *params, int i);

int					handle_c(va_list *argp, t_format *data);
int					handle_s(va_list *argp, t_format *data);
void				adjust_p(t_format *data, char *str);
int					handle_p(va_list *argp, t_format *data);
int					handle_percent(va_list *argp, t_format *data);

int					adjust_di(t_format *data, int64_t n, int len);
int					handle_di(va_list *argp, t_format *data);
void				print_sign(t_format *data, int64_t n, int m, char flag);
void				di_minus(t_format *data, int64_t n);
void				di_nominus(t_format *data, int64_t n);

void				print_ox(t_format *data, uint64_t n);
void				ouxx_minus(t_format *data, uint64_t n, int base, char flag);
void				ouxx_nomin(t_format *data, uint64_t n, int base, char flag);
int					adjust_ouxx(t_format *data, uint64_t n, int len, int base);
int					handle_ouxx(va_list *argp, t_format *data);

int					handle_f(va_list *argp, t_format *data);
int					f_prec(t_format *data, int len, long double f, int sign);
void				print_f_prec(t_format *data, long double f);
int					f_prec_zero(t_format *data, long long int n, int sign,
					int len);
void				print_fraction(t_format *data, float f, int sign);

char				*itoa_base(unsigned long long n, int base, char c);
void				putnbr_ll(char specifier, unsigned long long n, int base);
void				print_rem(int rem, char c);
int					ft_numlen(unsigned long long n, int base);
long double			get_round(int precision);

int					ft_min(int a, int b);
int					ft_max(int a, int b);
int					ft_abs(int n);

/*
**	---------------------------- GET_NEXT_LINE -----------------------------
*/

int					get_next_line(const int fd, char **line);

/*
**	------------------------------ MEMORY -----------------------------
*/
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				ft_bzero(void *s, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
**	------------------------------ STRING ------------------------------
*/
size_t				ft_strlen(const char *s);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *str, const char *sub, size_t len);
char				*ft_strdup(const char *s1);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);

/*
**	------------------------------ CHARACTER -----------------------------
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
**	------------------------- ADDITIONAL FUNCTIONS ------------------------
*/
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
**	---------------------------- BONUS FUNCTIONS ---------------------------
*/

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_lstsize(t_list *lst);

/*
**	---------------------- ADDITIONAL BONUS FUNCTIONS ---------------------
*/

t_list				*ft_lstfind_bonus(t_list *lst, void *data, int (*cmp)());
void				ft_lstprint_fd_bonus(t_list *lst, int fd);
void				ft_striteri_bonus(char *s, void (*f)(unsigned int, char *));
char				*ft_strcjoin_bonus(char *s1, char c, char *s2);
char				*ft_itoa_base_bonus(int n, int base);
char				*ft_strnew_bonus(size_t size);
int					ft_isupper_bonus(char c);
int					ft_islower_bonus(char c);
int					ft_nbrlen_bonus(int n);
int					ft_countwords_bonus(const char *s, char c);
int					ft_strcmp_bonus(const char *s1, const char *s2);
void				bubble_sort(int *arr, int size);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
