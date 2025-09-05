#include <string>
#include <iostream>
#include <fstream>

std::string	ft_replace(std::string str, std::string replace, size_t pos)
{
	std::string	ret;

	ret = (str).substr(0, pos);
	ret.append(replace);
	return (ret);
}

int main (int argc, char **argv)
{
	std::string	new_name;
	std::string	curr;
	std::string	copy = "";
	std::string	target;
	std::string	ret;
	size_t		pos;

	if (argc < 4)
	{
		std::cout << "Too few arguments: /sed filename s1 s2" << std::endl;
		return (1);
	}
	if (argc > 5)
	{
		std::cout << "Too many arguments: /sed filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream file(argv[1]);
	if (file.is_open() == 0)
	{
		std::cout << "Unable to open file, check filename" << std::endl;
		return (1);
	}
	new_name = argv[1];
	target = argv[2];
	new_name = new_name.append(".replace");
	std::ofstream replace(new_name);
	getline(file, curr, '\0');
	while (curr.find(argv[2]) != std::string::npos)
	{
		pos = curr.find(argv[2]);
		ret = ft_replace(curr, argv[3], pos);
		curr = curr.substr(pos + target.length(), curr.length() - target.length());
		copy.append(ret);
	}
	copy.append(curr);
	replace << copy << std::endl;
	file.close();
	replace.close();
}