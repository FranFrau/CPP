/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42roma.it>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 22:07:25 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/24 20:17:14 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	private:
		T*				_array;
		unsigned int	_nElements;
	public:
		unsigned int	getSize();

		Array();
		Array(unsigned int n);
		Array(const Array &copy);
		~Array();

		Array &operator=(const Array &equals);
		T&	operator[](unsigned int index) const;

		class IndexOutOfBoundException : public std::exception{
			public:
				virtual const char * what () const throw () 
				{
					return "Exception: Array out of bound";
				}
		};
};

template <typename T>
Array<T>::Array()
{
	this->_nElements = 0;
	this->_array =  new T[this->_nElements];
}

template <typename T>
Array<T>::Array(unsigned int n) : _nElements(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	this->_nElements = copy._nElements;
	this->_array = new T[copy._nElements];
	for (unsigned int i = 0; i < this->_nElements; i++)
		this->_array[i] = copy._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &equals)
{
	delete[] this->_array;
	this->_nElements = equals._nElements;
	this->_array = new T[equals._nElements];
	for (unsigned int i = 0; i < this->_nElements; i++)
		this->_array[i] = equals._array[i];
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i) const
{
	if (i < 0 || i >= this->_nElements)
		throw IndexOutOfBoundException();
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::getSize()
{
	return (this->_nElements);
}
#endif