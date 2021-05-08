#include <iostream>
#include <stdexcept>

int main()
{
	int a, b;
	while (std::cin >> a >> b)
	{
		try
		{
			if (b == 0)
			{
				throw std::runtime_error("the error of the second num is zero");
			}
			std::cout << a / b << std::endl;
		}
		catch (std::runtime_error err)
		{
			std::cout << err.what()
				<< "\ntry again? enter y or n" << std::endl;
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n') break;
		}
	}


	return 0;
}