# include <iostream>

# include "articulo.h"

using namespace std;

articulo::articulo(string _titulo, string _resumen, string _cuerpo){
	titulo = _titulo;
	resumen = _resumen;
	cuerpo = _cuerpo;
}

void articulo::mostrar_articulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
	cout << "Cuerpo: " << cuerpo << endl;
	cout << "Comentario: " << comentario << endl;
	cout << "Nota: " << nota << endl;
}
