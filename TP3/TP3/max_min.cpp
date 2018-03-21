#include <iostream>
#include <limits>

int mainmaxmin() {

	int val = 0;


	std::cout << "\nEl valor Maximo de un 'int' es: " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "El valor Minimo de un 'int' es: " << std::numeric_limits<int>::min() << std::endl;
	std::cout << "El valor Maximo de un 'short int' es: " << std::numeric_limits<short int>::max() << std::endl;
	std::cout << "El valor Minimo de un 'short int' es: " << std::numeric_limits<short int>::min() << std::endl;
	std::cout << "El valor Maximo de un 'char' es: " << std::numeric_limits<char>::max() << std::endl;
	std::cout << "El valor Minimo de un 'char' es: " << std::numeric_limits<char>::min() << std::endl;
	std::cout << "El valor Maximo de un 'long' es: " << std::numeric_limits<long>::max() << std::endl;
	std::cout << "El valor Minimo de un 'long' es: " << std::numeric_limits<long>::min() << std::endl;
	std::cout << "El valor Maximo de un 'long long' es: " << std::numeric_limits<long long>::max() << std::endl;
	std::cout << "El valor Minimo de un 'long long' es: " << std::numeric_limits<long long>::min() << std::endl;
	std::cout << "El valor Maximo de un 'size_t' es: " << std::numeric_limits<size_t>::max() << std::endl;
	std::cout << "El valor Minimo de un 'size_t' es: " << std::numeric_limits<size_t>::min() << std::endl;


	return 0;

}