/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffrau <ffrau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:51:54 by ffrau             #+#    #+#             */
/*   Updated: 2022/06/02 16:43:45 by ffrau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_numberValue = 0;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_numberValue = (value << this->_fractBits);
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_numberValue = roundf(value * (1 << this->_fractBits));
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_numberValue = fixed.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_numberValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_numberValue = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_numberValue >> this->_fractBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_numberValue / ( 1 << this->_fractBits));
}

std::ostream& operator<<(std::ostream & os, Fixed const & i)
{
	return (os << (i.toFloat()));
}

Fixed & Fixed::operator++ () //++a
{
	_numberValue++;
	return (*this);
}

Fixed Fixed::operator++ (int) //a++
{
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed & Fixed::operator-- () //--a
{
	_numberValue--;
	return (*this);
}

Fixed Fixed::operator-- (int) //a--
{
	Fixed temp = *this;
	--*this;
	return (temp);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed ret;

	ret.setRawBits(((this->_numberValue) * (fixed._numberValue)) >> 8);
	return (ret);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed ret(this->toFloat() / fixed.toFloat());
	return (ret);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed ret;

	ret.setRawBits(_numberValue - fixed._numberValue);
	return (ret);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed ret;

	ret.setRawBits(_numberValue + fixed._numberValue);
	return (ret);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (_numberValue == fixed._numberValue);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (_numberValue <= fixed._numberValue);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (_numberValue < fixed._numberValue);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (_numberValue > fixed._numberValue);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (_numberValue >= fixed._numberValue);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (_numberValue != fixed._numberValue);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a._numberValue > b._numberValue ? a : b);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a._numberValue < b._numberValue ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a._numberValue > b._numberValue ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a._numberValue < b._numberValue ? a : b);
}
