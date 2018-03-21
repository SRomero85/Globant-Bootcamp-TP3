#include<iostream>

int imp() {

	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;

	std::cout << "\nEl valor de 'a' es: " << a << std::endl;
	std::cout << "El valor de 'b' es: " << b << std::endl;

	//el valor cambia por que el int puede tomar valores negativos 0 y positivos
	//en cambio el unsigned int solo valores 0 y positivos a pesar de ser el mismo
	//valor en ambas variables cambia la forma de interpretar de la computadora

	return 0;
}