/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:16:08 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 01:41:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

template<typename T>
void iter(T *array, size_t size, void (*f) (T &) )
{
    for (size_t s = 0; s < size; s++)
        f(array[s]);
}

template<typename T>
void ft_print(T& t)
{
    std::cout << t << std::endl;
}