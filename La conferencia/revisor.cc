# include <iostream>
# include <vector>

# include "revisor.h"
# include "articulo.h"

using namespace std;

revisor::revisor(string _nombre, string _afiliacion, string _correo) : persona(_nombre, _afiliacion, _correo){
	
}

revisor::revisor(){
	
}

void revisor::comentar(int n){
	string los_comentarios;
	cout << "Empieze a escribir el comentario (presione enter para terminar de escribir)" << endl;
	getline(cin,los_comentarios); // getline nos permite recuperar todo el string que escriba el revisor
	articulos_resividos[n].comentario = los_comentarios;
}

void revisor::evaluar(int n){
	int la_nota;
	cout << "Ingrese la nota del articulo (solo enteros entre 0 y 5)" << endl;
	cin >> la_nota;
	articulos_resividos[n].nota = la_nota;
}

void revisor::mostrar_articulos_pendientes(){
	cout << "Tiene " << articulos_resividos.size() << " articulos pendientes" << endl;
	for (int x = 0; x < articulos_resividos.size() ; x = x + 1){
		cout << "x = " << x << " nota: " << articulos_resividos[x].nota << endl;
		cout << "x = " << x << " comentario" << articulos_resividos[x].comentario << endl;
	}
}


