#include <iostream>
#include "max_min.h"
#include "size_of.h"
#include "tipo_datos.h"
#include "imp_val.h"
#include "array.h"

int main(){

	int opcion = 10;
	while (opcion != 0) {
		std::cout << "\n----------------------------------------------------------------" << std::endl;
		std::cout << "\n  Ingrese una de las siguientes opciones: " << std::endl;
		std::cout << "  Para impprimir los sizeof ingrese 1" << std::endl;
		std::cout << "  Para ver la representaciones de los datos ingrese 2" << std::endl;
		std::cout << "  Para imprimir los limites max y min ingrese 3" << std::endl;
		std::cout << "  Para imprimir los resultados de las variables a y b ingrese 4" << std::endl;
		std::cout << "  Para concatenar el nombre de dos variables: 5" << std::endl;
		std::cout << "  Para salir ingrese 0" << std::endl;
		std::cout << "\n----------------------------------------------------------------" << std::endl;
		std::cout << "\n Ingrese la opcion deseada: "; std::cin >> opcion;



		switch (opcion)
		{
		case 1:
			size();
			break;
		case 2:
			tipodatos();
			break;
		case 3:
			mainmaxmin();
			break;
		case 4:
			imp();
			break;
		case 5:
			arrays();
			break;
		default:
			std::cout << "\nOpcion Incorrecta\n";
			break;
		}
	}
return 0;

}