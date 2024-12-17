/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmpianim <vmpianim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:06:22 by vmpianim          #+#    #+#             */
/*   Updated: 2024/12/17 13:35:25 by vmpianim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H
#  include<threads.h>
#  include<pthread.h>
#  include <stdio.h>
# include "libft/libft.h"

typedef struct  s_philo
{
       pthread_t            *thread;
       int                  id;
       int                  nb_philo;
       size_t               time_to_die;
       size_t               time_to_eat;
       size_t               time_to_sleep;
       size_t               time_to_think;
       pthread_mutex_t      *right_fork;
       pthread_mutex_t      *left_fork;
       struct s_philo       *philosopher;
       
} t_philosopher;
int    check_args(int argc, char **argv);
int    ft_is_digit(char *str);
void   assign_value(int argc, char **argv, t_philosopher *philo);
void   assign_thread(t_philosopher *philo);

#endif