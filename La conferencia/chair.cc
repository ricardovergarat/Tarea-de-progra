# include <iostream>
# include <vector>

# include "chair.h"

using namespace std;

chair::chair(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

vector <string> chair::crear_conferencia(){
	string omitir,nombre,fecha_inicio,fecha_termino,pais,ciudad,nombre_revisor;
	cout << "" << endl;
	getline(cin,omitir); // por algunmotivo el primer getline no funciona, esto solo esta para que funcionen los demas
	cout << "Ingrese el nombre de la coferencia" << endl;
	getline(cin,nombre);
	cout << "Ingrese la fecha de inicio 	ejemplo: 23-04-2020" << endl;
	getline(cin,fecha_inicio);
	cout << "Ingrese la fecah de termino	ejemplo: 30-04-2020" << endl;
	getline(cin,fecha_termino);
	cout << "Ingrese el pais" << endl;
	getline(cin,pais);
	cout << "Ingrese la ciudad" << endl;
	getline(cin,ciudad);
	cout << "Ingrese el nombre de un revisor" << endl;
	getline(cin,nombre_revisor);
	vector <string> una_conferencia;
	una_conferencia.push_back(nombre);
	una_conferencia.push_back(fecha_inicio);
	una_conferencia.push_back(fecha_termino);
	una_conferencia.push_back(pais);
	una_conferencia.push_back(ciudad);
	una_conferencia.push_back(nombre_revisor);
	return una_conferencia;
}

