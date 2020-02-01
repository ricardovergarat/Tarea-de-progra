# include <iostream>
# include <vector>

# include "revisor.h"
# include "articulo.h"

using namespace std;

revisor::revisor(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

revisor::revisor(){
	
}

void revisor::comentar(articulo &un_articulo){
	string los_comentarios;
	cout << "Empieze a escribir el comentario (presione enter para terminar de escribir)" << endl;
	getline(cin,los_comentarios); // getline nos permite recuperar todo el string que escriba el revisor
	un_articulo.comentario = los_comentarios;
}

void revisor::evaluar(articulo &un_articulo){
	int la_nota;
	cout << "Ingrese la nota del articulo (solo enteros entre 0 y 5)" << endl;
	cin >> la_nota;
	un_articulo.nota = la_nota;
}

void revisor::mostrar_articulos_pendientes(){
	cout << "Tiene " << articulos_para_revisar.size() << " articulos pendientes" << endl;
	for (int x = 0; x < articulos_para_revisar.size() ; x = x + 1){
		cout << "x = " << x << " nota: " << articulos_para_revisar[x].nota << endl;
	}
}
