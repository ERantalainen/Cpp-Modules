#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}

Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}

Cure &Cure::operator=(const Cure &assign)
{
	return *this;
}

