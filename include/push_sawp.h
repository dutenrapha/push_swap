#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack {
	int data;
	struct s_stack* next;
} t_stack;

typedef struct s_solution {
	char *step;
	struct s_solution* next;
} t_solution;

void		ft_print_list(t_stack *n);
t_stack		*ft_lst_new(int data);
t_stack		*ft_init_stack(int argc, char *argv[ ]);
void		ft_add_back(t_stack **head, int data);
void		ft_add_front(t_stack **head, int data);
void		ft_delete_first(t_stack	**s);
void		ft_swap(t_stack **s);
void		ft_push(t_stack	**dst, t_stack	**src);
void		ft_rotate(t_stack **head, int point);
int			ft_lstlen(t_stack	*a);
void		ft_add_solution(t_solution **head, char *step);
int			ft_get_value(t_stack *s, int position);
void		ft_insertion_sort(t_solution **s, t_stack *a, int len);
void		ft_print_sol(t_solution *n);
void		sawp(t_solution **s, t_stack **a, int position);
int			ft_split_size(char **split);
void		ft_quick_sort(t_solution **s, t_stack **a, int init, int end);
void		sawp_quick(t_solution **s, t_stack **a, int i, int j);
void		ft_rr(t_stack **head);
int			ft_rr_x(t_solution **s, t_stack **x, int i, char *step);
void		ft_r(t_stack **head);
int			ft_r_x(t_solution **s, t_stack **x, int i, char *step);
int			ft_get_index(t_stack *s, int value);
#endif