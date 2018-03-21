#include <iostream>


int size() {
	std::cout<<"\nEl tamaño de un 'short int' es: "<< sizeof(short int)<<std::endl;
	std::cout << "El tamaño de un 'int' es: " << sizeof(int) << std::endl;
	std::cout << "El tamaño de un 'float' es: " << sizeof(float) << std::endl;
	std::cout << "El tamaño de un 'double' es: " << sizeof(double) << std::endl;
	std::cout << "El tamaño de un 'long' es: " << sizeof(long) << std::endl;
	std::cout << "El tamaño de un 'long long' es: " << sizeof(long long) << std::endl;
	std::cout << "El tamaño de un 'size_t' es: " << sizeof(size_t) << std::endl;

	return 0;
}