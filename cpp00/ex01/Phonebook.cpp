#include   "Phonebook.hpp"
#include <string>
#include <iostream>

Phonebook::~Phonebook(){}

Phonebook::Phonebook()
{
	count = 0;
	oldest = 0;
}

void Phonebook::add()
{
	if (count < 8)
	{
		input(count);
		count++;
		return ;
	}
	else
	{
		count = oldest % 8;
		oldest++;
		input(count);
	}
	return ;
}

void Phonebook::search()
{
	std::string input;

	display_list();
	std::cout << "Choose index to display" << std::endl;
	std::cin >> input;
	if (input.size() > 1)
		std::cout << "Please choose a valid index" << std::endl;
	else if (stoi(input) > count)
		std::cout << "Choose an index between 0 and " + std::to_string(count) << std::endl;
	else if (input[0] > '0' && input[0] < '9')
			display_contact(stoi(input));
	else
		std::cout << "Please choose a valid index" << std::endl;
}


void	Phonebook::display_contact(int index)
{
	std::string	temp;

	index = index - 1;
	temp = book[index].getFirst();
	std::cout << "First name:" + temp << std::endl;
	temp = book[index].getLast();
	std::cout << "Last name:" + temp << std::endl;
	temp = book[index].getNick(); 
	std::cout << "Nickname: " + temp << std::endl;
	temp = book[index].getNbr();
	std::cout << "Number: " + temp << std::endl;
	temp = book[index].getSecret();
	std::cout << "Darkest secret: " + temp << std::endl;
	return ;
}

static	std::string trunc(std::string str)
{
	if (str.length() < 10)
		return (str);
	else
	{
		str.resize(9);
		str = str + ".";
	}
	return (str);
}

bool Phonebook::input(int index)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string number;
	std::string secret;
	
	std::cout << "First name:" << std::endl;
	std::cin >> first;
	if (first.empty())
	{
		std::cout << "No empty fields allowed:" << std::endl;
		return false;
		}
	std::cout << "Last name:" << std::endl;
	std::cin >> last;
	if (last.empty())
	{
		std::cout << "No empty fields allowed:" << std::endl;
		return false;
	}
	std::cout << "Nick name:" << std::endl;
	std::cin >> nick;
	if (nick.empty())
	{
		std::cout << "No empty fields allowed:" << std::endl;
		return false;
	}
	std::cout << "Phone number:" << std::endl;
	std::cin >> number;
	if (number.empty())
	{
		std::cout << "No empty fields allowed:" << std::endl;
		return false;
	}
	std::cout << "Darkest secret:" << std::endl;
	std::cin >> secret;
	if (secret.empty())
	{
		std::cout << "No empty fields allowed:" << std::endl;
		return false;
	}
	book[index] = Contacts(first, last, nick, number, secret);
	return true;
}

void	Phonebook::display_list()
{
	int	i = 0;
	std::string	temp;

	std::cout << std::right << std::setw(10) << "Index|";
	std::cout << std::right << std::setw(10) << "Name|";
	std::cout << std::right << std::setw(10) << "Surname|";
	std::cout << std::right << std::setw(10) << "Nickname|" << std::endl;

	while (i < count)
	{
		temp = std::to_string(i + 1);
		std::cout << std::right << std::setw(10) << temp + "|";
		temp = book[i].getFirst();
		temp = trunc(temp);
		std::cout << std::right << std::setw(10) << temp + "|";
		temp = book[i].getLast();
		temp = trunc(temp);
		std::cout << std::right << std::setw(10) << temp + "|";
		temp = book[i].getNick();
		temp = trunc(temp);
		std::cout << std::right << std::setw(10) << temp + "|" << std::endl;
		i++;
	}
}
