/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:48:19 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 15:43:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> intArr(3);
    for (int i = 0; i < 3; i++)
        std::cout << intArr[i] << std::endl;
    for (int i = 0; i < 3; i++)
    {
        intArr[i] = i;
        std::cout << intArr[i] << std::endl;
    }
    try
    {
     std::cout << intArr[3] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}
