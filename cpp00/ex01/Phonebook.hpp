#pragma once

#include <iostream>
#include "Contacts.hpp"
#include <iomanip>
#include <string>

class Phonebook
{
private:
	Contacts	book[8];
	int			count;
	int			oldest;
	void		display_list();
	void		display_contact(int index);
	bool		input(int count);
public:
	Phonebook();
	~Phonebook();
	void	add();
	void	search();
};

// 00000index|00000NAME|000SURNAME|00Nickname
