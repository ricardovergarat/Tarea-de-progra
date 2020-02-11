# include <iostream>
# include <vector>
# include <math.h> // para convertir a numero

# include "chair.h"

using namespace std;

bool es_numero2(string dato){
	int x = 0;
	while ( x < dato.size() ){
		if ( isdigit(dato[x]) == 0 ){
			return false;
		}
		x = x + 1;
	}
	return true;
}

int convertir_a_numero2(string dato){
	int x = 0;
	int suma = 0;
	while ( x < dato.size() ){
		int potencia = ( dato.size() - 1 ) - x;
		switch (dato[x]){
			case '0': suma = suma + 0 * pow(10,potencia); break;
			case '1': suma = suma + 1 * pow(10,potencia); break;
			case '2': suma = suma + 2 * pow(10,potencia); break;
			case '3': suma = suma + 3 * pow(10,potencia); break;
			case '4': suma = suma + 4 * pow(10,potencia); break;
			case '5': suma = suma + 5 * pow(10,potencia); break;
			case '6': suma = suma + 6 * pow(10,potencia); break;
			case '7': suma = suma + 7 * pow(10,potencia); break;
			case '8': suma = suma + 8 * pow(10,potencia); break;
			case '9': suma = suma + 9 * pow(10,potencia); break;
		}
		x = x + 1;
	}
	int numero = suma;
	return numero;
}

chair::chair(string _nombre, string _afiliacion, string _correo) : persona(_nombre,_afiliacion,_correo){
	
}

