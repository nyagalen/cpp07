/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:56:51 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 01:02:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void swap(T& a, T& b)
{
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template<typename T>
T min(T a, T b)
{
    return (a <= b ? a : b);
}

template<typename T>
T max(T a, T b)
{
    return (a >=b ? a : b);
}

