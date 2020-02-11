# include <iostream>

# include "persona.h"

using namespace std;

persona::persona(string _nombre, string _afiliacion, string _correo){
	nombre = _nombre;
	afiliacion = _afiliacion;
	correo = _correo;
}



void persona::mostrar_persona(){
	cout << "nombre: " << nombre << endl;
	cout << "afiliacion: " << afiliacion << endl;
	cout << "correo: " << correo << endl;
}

string persona::get_nombre(){
	return nombre;
}
