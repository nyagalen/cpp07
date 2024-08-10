/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:48:19 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 16:51:22 by marvin           ###   ########.fr       */
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

    Array<int> newIntArr(intArr);

    std::cout << "Second member of the new array before we changed it: " << newIntArr[1] << std::endl;
    newIntArr[1] = 42;
    std::cout << "Second member of the new array after we changed it: " << newIntArr[1] << std::endl;
    std::cout << "Second member of the old array : " << intArr[1] << std::endl;

    Array<int> anotherIntArr = intArr;

    std::cout << "Second member of the new array before we changed it: " << anotherIntArr[1] << std::endl;
    anotherIntArr[1] = 42;
    std::cout << "Second member of the new array after we changed it: " << anotherIntArr[1] << std::endl;
    std::cout << "Second member of the old array : " << intArr[1] << std::endl;

    return (0);
}
