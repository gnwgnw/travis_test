#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		std::cout << argv[1] << std::endl;
	}
	else{
		std::cout << "No!\n";
	}
	return 0;
}