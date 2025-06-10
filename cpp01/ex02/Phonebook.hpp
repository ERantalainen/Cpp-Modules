#pragma once

#include <iostream>
#include "Contacts.hpp"
#include <iomanip>

class Phonebook
{
private:
	Contacts	book[8];
	int			count;
	int			oldest;
	void		display_list();
	void		display_contact();
public:
	Phonebook();
	void	add();
	void	search();
};

