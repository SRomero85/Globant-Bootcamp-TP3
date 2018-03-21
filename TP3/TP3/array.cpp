#include<iostream>

int arrays() {
	
	int array[5];

	int opcion = 10;


	while (opcion != 0){
		std::cout << "\n-------------------------------------------------------" << std::endl;
		std::cout << "\n  Ingrese una de las siguientes opciones: " << std::endl;
		std::cout << "  Para ingresar los datos en el array ingrese 1" << std::endl;
		std::cout << "  Para ver los datos en el array ingrese 2" << std::endl;
		std::cout << "  Para terminar ingrese 0" << std::endl;
		std::cout << "\n-------------------------------------------------------" << std::endl;
		std::cout << "\n Ingrese la opcion deseada: "; std::cin >> opcion;

		int i = 0;

		switch (opcion)
		{
		case 1:

			while (i < 5) {
				i++;
				std::cout << "Ingrese el valor " << i<<": "; std::cin >> array[i];//permite ingresar valores al array

			}

			break;
		case 2:

			while (i < 5) {
				i++;
				std::cout << "El valor " << i<<" es: "; std::cout << array[i]<<std::endl;//muestra los valores del array
			}
				break;
		default:
			std::cout << "\nOpcion Incorrecta\n";
			break;
			}
		}

	return 0;
}