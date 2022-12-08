#include <iostream>

int main(int argc, char **argv)
{
	(void)argc;
	int i = 1;
	while (argv[i] != NULL)
	{
		int j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				argv[i][j] = argv[i][j] - 32;
			}
			j++;
		}
		if (argv[i + 1] != NULL)
			std::cout << argv[i] << " ";
		else
			std::cout << argv[i];
		i++;
	}
	return (0);
}