/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:15:39 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 01:46:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{

    std::cout << "-----printing strings-------" << std::endl;
    std::string strings[] = {"one", "two", "three", "four"};

    iter(strings, 3, &ft_print);
   
    std::cout << "---------printing ints--------" << std::endl;
    int ints[] = {100, 200, 300, 400};
    iter(ints, 3, &ft_print);

    std::cout << "---------printing chars----------"<< std::endl;
    char chars[] = {'w', 't', 'f'};
    iter(chars, 3, &ft_print);

    return(0);
}
