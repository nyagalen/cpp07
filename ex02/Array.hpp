/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 01:48:32 by svydrina          #+#    #+#             */
/*   Updated: 2024/08/10 15:39:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define RED "\033[31m"
#define CYAN "\033[36m"
#define MAGENTA "\033[35m"
#define RESET "\033[0m"

template<typename T>
class Array
{
private:
    T*  _arr;
    unsigned int _size;
public:
    Array(): _arr(new T()), _size(0) {};
    Array(unsigned int u): _arr(new T[u]), _size(u) {};
    Array(const Array& rhs): _arr(new T[rhs._size]), _size(rhs._size)
    {
        std::cout << CYAN "Copy constructor called" RESET<< std::endl;
        for (unsigned int i = 0; i < rhs._size; i++)
            _arr[i] = rhs._arr[i];
    };
    Array& operator=(const Array& rhs)
    {
        std::cout << CYAN "Assignment operator called" RESET << std::endl;
        if (this != &rhs)
        {
            delete [] this->_arr;
            this->arr = new T[rhs._size];
            this->_size = rhs._size;
            for (unsigned int i = 0; i < rhs._size; i++)
                this->arr[i] = rhs._arr[i];
        }
        return *this;
    }
    
    ~Array(){ delete [] _arr; };

    unsigned int size() const { return _size;}

    class OutOfBoundsException : public std::exception
    {
        public:
            virtual const char* what() const throw() { return RED"Index out of bounds" RESET;}
    };

    T& operator[] (unsigned int u) const
    {
        if (u >= _size)
            throw OutOfBoundsException();
        return _arr[u];
    }
};


