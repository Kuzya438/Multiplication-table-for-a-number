#include <iostream>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");

	int var{};
	
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> var;

	for (int i{1}; i <= 10; ++i)
		std::cout << var << " x " << i << " = " << var * i << std::endl;

	return EXIT_SUCCESS;
}
