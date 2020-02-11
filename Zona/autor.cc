# include <iostream>
# include <vector>
# include <fstream> // para abrir archivos

# include "autor.h"

using namespace std;

bool existe_archivo(string nombre){
	char nombre_archivo[ nombre.size() ];
	int x = 0;
	while ( x < nombre.size() ){
		nombre_archivo[x] = nombre[x];
		x = x + 1;
	}
	ifstream archivo;
	archivo.open(nombre_archivo);
	if ( archivo.fail() ){
		system("cls");
		cout << "No se encontro el archivo" << endl;
		archivo.close();
		return false;
	}else{
		archivo.close();
		return true;
	}
}

string abrir_archivo(string nombre){
	char nombre_archivo[ nombre.size() ];
	int x = 0;
	while ( x < nombre.size() ){
		nombre_archivo[x] = nombre[x];
		x = x + 1;
	}
	ifstream archivo;
	archivo.open(nombre_archivo);
	string suma = "";
	string linea;
	while ( !archivo.eof() ){
		getline(archivo,linea);
		suma = suma + "\n" + linea;
	}
	archivo.close();
	return suma;
}

autor::autor(string _nombre, string _afiliacion, string _correo) : persona(_nombre,_afiliacion,_correo){
	
}

