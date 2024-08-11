/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:48:19 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/11 15:50:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    std::cout << "creating an array of a complex type" << std::endl;
    
    Array<std::string> strArr(3);
    std::cout << strArr << std::endl;
    strArr[0] = "bla";
    strArr[1] = "blabla";
    strArr[2] = "blablabla";
    std::cout << "printing array after it's initialized " << strArr << std::endl;
    Array<int> intArr(3);
    
    std::cout << intArr << std::endl;
    for (int i = 0; i < 3; i++)
        intArr[i] = i * 2;
    std::cout << "updated array" << std::endl;
    std::cout << intArr << std::endl;
    try
    {
    std::cout << MAGENTA "Trying to reach a non-existent member" RESET<< std::endl;
     std::cout << intArr[3] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    Array<int> intArr2(intArr);

    std::cout << "intArr2 before we changed it: " << intArr2 << std::endl;
    intArr2[1] = 42;
    std::cout << "intArr2 after we changed it: " << intArr2 << std::endl;
    std::cout << "old array : " << intArr << std::endl;

    

   Array<int> intArr3(3);
   std::cout << "Printing the freshly created third array " << std::endl;
   std::cout << intArr3 << std::endl;
std::cout << "Now it will be equal to the second array" << std::endl;
intArr3 = intArr2;
std::cout << "What does the third array look like now?" << std::endl;
std::cout << intArr3 << std::endl;
std::cout << "let's change the middle member of the third array" << std::endl;
intArr3[1] = 100;
std::cout << intArr3 << std::endl;
std::cout << "has the source array also changed?" << std::endl;
std::cout << intArr2 << std::endl;

    return (0);
}

// #include <iostream>
// #include <cstdlib>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }