#pragma once

# include <iostream>

class Contacts 
{
	private:
		std::string _fname;
		std::string _lname;
		std::string _nick;
		std::string _number;
		std::string _secret;
	public:
		Contacts();
		Contacts(std::string _fname, std::string _lname, std::string _nick, std::string _number, std::string _secret);
		std::string	getFirst();
		std::string getLast();
		std::string getNick();
		std::string getNbr();
		std::string getSecret();
};