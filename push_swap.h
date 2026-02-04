/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:08:02 by albelmon          #+#    #+#             */
/*   Updated: 2026/02/04 13:44:11 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

/*						STRUCT						*/
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/*						PUSH_SWAP					*/
int		main(int argc, char **argv);
void	ft_sort_stack(t_stack **a, t_stack **b);

/*						PARSING						*/
int		ft_check_input(int argc, char **argv, t_stack **a);
int		ft_process_number(char *str_num, t_stack **a);
int		ft_check_duplicates(t_stack *a, int n);

/*						ERRORS						*/
void	ft_free_stack(t_stack **stack);
void	ft_free_split(char **str);
void	ft_error(t_stack **stack, char **str);

/*						STACK						*/
void	ft_add_to_stack(t_stack **a, int value);
int		ft_stack_size(t_stack *stack);

/*						MOVEMENTS					*/
void	ft_swap(t_stack **stack, char x, int bool);
void	ft_push_a(t_stack **a, t_stack **b, int bool);
void	ft_push_b(t_stack **b, t_stack **a, int bool);
void	ft_rotate(t_stack **stack, char x, int bool);
void	ft_reverse_rotate(t_stack **stack, char x, int bool);
void	ft_swap_both(t_stack **a, t_stack **b);
void	ft_rotate_both(t_stack **a, t_stack **b);
void	ft_reverse_rotate_both(t_stack **a, t_stack **b);
void	ft_push_smallest_to_b(t_stack **a, t_stack **b);

/*						KSORT						*/
void	ft_assign_index(t_stack *a);
int		ft_calculate_range(t_stack **stack);
int		ft_find_max_pos(t_stack *stack);
void	ft_phase_a(t_stack **a, t_stack **b);
void	ft_phase_b(t_stack **a, t_stack **b);
int		ft_is_sorted(t_stack *stack);
int		ft_find_min_pos(t_stack *stack);
void	ft_sort_3(t_stack **a);
void	ft_sort_5(t_stack **a, t_stack **b, int size);

#endif
