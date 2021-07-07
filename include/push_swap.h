/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:59:19 by rdutenke          #+#    #+#             */
/*   Updated: 2021/07/07 22:23:40 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}t_stack;

typedef struct s_solution
{
	char				*step;
	struct s_solution	*next;
}t_solution;

t_stack		*ft_lst_new(int data);
t_stack		*ft_init_stack(int argc, char *argv[ ]);
void		ft_add_back(t_stack **head, int data);
void		ft_add_front(t_stack **head, int data);
void		ft_delete_first(t_stack	**s);
void		ft_push(t_stack	**dst, t_stack	**src);
void		ft_rotate(t_stack **head, int point);
int			ft_lstlen(t_stack	*a);
void		ft_add_solution(t_solution **head, char *step);
int			ft_get_value(t_stack *s, int position);
void		ft_print_sol(t_solution *n);
int			ft_split_size(char **split);
void		ft_r(t_stack **head);
void		ft_simple_sort(t_stack *a, int init, int end);
void		ft_relabel(t_stack **a, t_stack *b);
void		ft_set_value(t_stack **a, int position, int value);
void		ft_radix_sort(t_solution **s, t_stack **a);
void		ft_free_stack(t_stack **a);
void		ft_free_solution(t_solution **s);
#endif
