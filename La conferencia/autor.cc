# include <iostream>
# include <vector>
# include <fstream> // para abrir archivos

# include "autor.h"
# include "revisor.h"
# include "articulo.h"

using namespace std;

autor::autor(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

vector <string> autor::crear_articulo(){
	string titulo,resumen,cuerpo,nombre_archivo;
	cout << "Ingrese el titulo del articulo" << endl;
	getline(cin,titulo);
	cout << "Escriba el resumen del articulo" << endl;
	getline(cin,resumen);
	int fin = 0;
	string  suma = "";
	while ( fin != 1 ){
		cout << "Ingres el nombre del archivo 	ejemplo: 1.txt" << endl;
		getline(cin,nombre_archivo);
		char nombre[ nombre_archivo.size() ];
		int x = 0;
		while ( x < nombre_archivo.size() ){
			nombre[x] = nombre_archivo[x];
			x = x + 1;
		}
		ifstream archivo;
		archivo.open(nombre);
		if ( archivo.fail() ){
			cout << "No se encontro el archivo" << endl;
			//exit(1);
		}
		while ( !archivo.eof() ){
			getline(archivo,cuerpo);
			suma = suma + "\n" + cuerpo;
			fin = 1;
		}
	}
	vector <string> un_articulo;
	un_articulo.push_back(titulo);
	un_articulo.push_back(resumen);
	un_articulo.push_back(suma);
	return un_articulo;
}
