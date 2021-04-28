#include <iostream>
int main() {
	unsigned u = 10, u1 = 42;
	std::cout << u1 - u << std::endl;
	std::cout << u - u1 << std::endl;

	int i = 10, i1 = 42;
	std::cout << i1 - i << std::endl;
	std::cout << i - i1 << std::endl;

	std::cout << i - u1 << std::endl;
	std::cout << u1 - i << std::endl;
	std::cout << u - i1 << std::endl;
	std::cout << u1 - i << std::endl;

}
