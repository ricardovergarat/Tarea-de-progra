# include <iostream>

# include "articulo.h"

using namespace std;

articulo::articulo(string _titulo, string _resumen){
	titulo = _titulo;
	resumen = _resumen;
}

void articulo::mostrar_articulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
	cout << "Comentario: " << comentario << endl;
	cout << "Nota: " << nota << endl;
}
