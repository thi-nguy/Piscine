/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsembely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:21:14 by tsembely          #+#    #+#             */
/*   Updated: 2019/09/08 21:49:04 by tsembely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

int		ft_fill_tab(char **tab, int *max, int x, int y);
int		*ft_get_max(int *max, char *str);
int		*ft_free_ret(int *max);
int		ft_check(char **tab, int *max);
int		ft_check_up(char **tab, int *max, int i);
int		ft_check_down(char **tab, int *max, int i);
int		ft_check_left(char **tab, int *max, int i);
int		ft_check_right(char **tab, int *max, int i);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	**ft_create_tab(void);
void	ft_write_tab(char **tab);
void	ft_free_tab(char **tab);
void	ft_init_tab(char **tab);
void	ft_print_error(void);

#endif
