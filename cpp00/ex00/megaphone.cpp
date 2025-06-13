#include <iostream>
#include <cctype>
#include <string>

int	main (int argc, char **argv)
{
	int	i;
	int	j;
	std::string s;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j] = toupper(argv[i][j]);
			j++;
		}
		s.append(argv[i]);
		i++;
	}
	std::cout << s << std::endl;
}