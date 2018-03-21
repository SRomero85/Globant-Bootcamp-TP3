#include <iostream>

int tipodatos() {

	char var = 65;
	
	printf("\nLos Resultados con printf son:\n");
	printf("\nEl valor de la variable en decimal es : %d \n", var);
	printf("El valor de la variable en octal es : %o \n", var);
	printf("El valor de la variable en hexa es : %x \n", var);
	printf("El valor de la variable en caracter es : %c \n", var);

	std::cout << "\nlos valores con 'cout' son:" << std::endl;
	std::cout << "\nEl valor en decimal es: "<< std::dec << (int)var << std::endl;
	std::cout << "El valor en octal es: " << std::oct << (int)var << std::endl;
	std::cout << "El valor en hexadecimal es: " << std::hex << (int)var << std::endl;
	std::cout << "El valor en caracter es: " << var << std::endl;



	return 0;
}