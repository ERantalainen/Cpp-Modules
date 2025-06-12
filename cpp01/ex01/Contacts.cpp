/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erantala <erantala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 02:19:58 by erantala          #+#    #+#             */
/*   Updated: 2025/06/11 02:34:38 by erantala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contacts::Contacts(): _fname(""), _lname(""), _nick(""), _number(""), _secret("")
{}
Contacts::Contacts(std::string _fname, std::string _lname, std::string _nick, std::string _number, std::string _secret):
	_fname(_fname), _lname(_lname), _nick(_nick), _number(_number), _secret(_secret)
{}
std::string Contacts::getFirst()
{	return (_fname); }

std::string Contacts::getLast()
{	return (_lname); }
std::string Contacts::getNick()
{	return (_nick); }

std::string Contacts::getNbr()
{	return (_number);}

std::string Contacts::getSecret()
{ return (_secret); }