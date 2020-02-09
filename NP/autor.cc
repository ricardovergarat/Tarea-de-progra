# include <iostream>
# include <vector>
# include <fstream> // para abrir archivos

# include "autor.h"
# include "revisor.h"
# include "articulo.h"

using namespace std;

bool existe_archivo(string &nombre_archivo){
	ifstream archivo;
	string nombre;
	cout << "Ingrese el nombre del archivo 	ejempli 1.txt" << endl;
	getline(cin,nombre);
	
	char su_nombre[nombre.size() ];
	int x = 0;
	while ( x < nombre.size() ){
		su_nombre[x] = nombre[x];
		x = x + 1;
	}
	
	archivo.open(su_nombre);
	if ( archivo.fail() ){
		system("cls");
		cout << "No se encontro el archivo" << endl;
		archivo.close();
		return false;
	}else{
		nombre_archivo = nombre;
		return true;
	}
}

autor::autor(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

vector <string> autor::crear_articulo(){
	string titulo,resumen,cuerpo;
	cout << "Ingrese el titulo del articulo" << endl;
	getline(cin,titulo);
	cout << "Escriba el resumen del articulo" << endl;
	getline(cin,resumen);
	bool existe = false;
	string nombre = "";
	while ( existe != true ){
		existe = existe_archivo(nombre);
	}
	
	char nombre_archivo[ nombre.size() ];
	int x = 0;
	while ( x < nombre.size() ){
		nombre_archivo[x] = nombre[x];
		x = x + 1;
	}
	
	ifstream archivo;
	archivo.open(nombre_archivo);
	string suma = "";
	while ( !archivo.eof() ){
		getline(archivo,cuerpo);
		suma = suma + "\n" + cuerpo;
	}
	archivo.close();
	vector <string> un_articulo;
	un_articulo.push_back(titulo);
	un_articulo.push_back(resumen);
	un_articulo.push_back(suma);
	un_articulo.push_back("False");
	un_articulo.push_back("");
	return un_articulo;
}
