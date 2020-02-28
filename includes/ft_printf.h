/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/18 10:39:56 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/24 12:36:57 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

typedef struct	s_road
{
	int			index;
	int			nbchar;
	char		*argument;
	char		*tmp;
	char		*large;
	int			c2;
	char		*signe;
}				t_road;

t_road			g_road;

typedef struct	s_option
{
	int			moins;
	int			plus;
	int			zero;
	int			space;
	int			diese;
}				t_option;

t_option		g_option;

typedef struct	s_save
{
	char		signe;
	char		type;
	int			l;
	int			ll;
	int			h;
	int			hh;
	int			grand_l;
	int			large;
	int			precision;
}				t_save;

t_save			g_save;

int				ft_printf(const char *format, ...)
				 __attribute__((format(printf,1,2)));
int				treatment(va_list *args);
int				resolv_di(void);
int				skipmoin(char *tmp, int *moins);
int				swap(char **tmp);
int				place_moins(char *tmp);
int				resolv_s_large(int i, char *tmp, int size);
int				resolv_x(void);
int				resolv_f(void);
int				ft_atoi(const char *str);
int				utils_resolv_x(char *tmp, char *tmp2, char **large);
int				norme_di(char *tmp, int *moins, int i, char **space_plus);
int				norme_di2(size_t s, char *tmp, char **space_plus, int moins);
int				norme_di3(char **space_plus, char *tmp);
int				norme_di4(char **space_plus);
int				resolv_di_precision(char *tmp, int i);
int				resolv_di_moins(int moins);
int				resolv_di_size(char *tmp, int size, char *b, int moins);
int				resolv_di_plus(char **str);
int				resolv_norme_f(char *tmp);
int				resolv_norme_f2(char *tmp);
int				resolv_norme_f3(char *tmp);
char			*search_space(char *tmp);
char			*search_zero(char *tmp);
char			*ft_itoa_long_double_pf(long double n);
char			*ft_itoa_unsigned_pf(unsigned int n);
char			*ft_itoa_unsigned_long_pf(unsigned long long int n);
char			*ft_itoa_base_unsigned_long_pf(unsigned long long int n);
char			*ft_itoa_base_pf(long long int n);
char			*ft_strdup(const char *s);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strnew(size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strstr(const char *str, const char *to_find);
char			*ft_itoa_pf(long long int n);
void			display(char *str, char a);
void			ini_struct(int a, int b, int c);
void			analyse(char *address_percent);
void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putnbr(int nb);
void			ft_bzero(void *s, size_t n);
void			ft_strdel(char **as);
size_t			ft_strlen(const char *s);

#endif
