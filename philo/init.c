/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmpianim <vmpianim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:23:36 by vmpianim          #+#    #+#             */
/*   Updated: 2024/12/17 13:45:54 by vmpianim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void *philosopher_routine(void *arg)
{
    t_philosopher *philo = (t_philosopher *)arg;
    printf("Philosopher %d is ready!\n", philo->id);
    return NULL;
}

void    assign_value(int argc, char **argv, t_philosopher *philo)
{
  int           i;
  t_philosopher *philosopher;
  pthread_mutex_t      *fork;

  fork = malloc(sizeof(pthread_mutex_t) * philo->nb_philo);
  i = 0;
  philo->nb_philo = ft_atoi(argv[1]);
  philo->time_to_die = ft_atoi(argv[2]);
  philo->time_to_eat = ft_atoi(argv[3]);
  philo->time_to_sleep = ft_atoi(argv[4]);
  philo->philosopher = malloc(sizeof(t_philosopher) * philo->nb_philo);
  while (i < philo->nb_philo)
  {
    philo->philosopher[i].id = i + 1;
    philo->philosopher[i].left_fork = &fork[i];
    philo->philosopher[i].right_fork = &fork[(i + 1) % philo->nb_philo];
   printf("philosopher[%d] left_fork = [%p] rigth_fork = [%p]\n", philo->philosopher[i].id, philo->philosopher[i].left_fork, philo->philosopher[i].right_fork);
    i++;
  }
  assign_thread(philo);
}

void  assign_thread(t_philosopher *philo)
{
  pthread_t *thread;
  int       i;

  i = 0;
  thread = malloc(sizeof(pthread_t) * philo->nb_philo);
  while (i < philo->nb_philo)
  {
    if (pthread_create(&thread[i], NULL, philosopher_routine, &philo->philosopher[i]) != 0)
      return ;
      i++;
  }
  i = 0;
  while (i < philo->nb_philo)
  {
    if (pthread_join(thread[i], NULL) != 0)
      return ;
    i++;
  } 
}