# include "articulo.h"

using namespace std;

articulo::articulo(string _titulo, string _resumen){
	titulo = _titulo;
	resumen = _resumen;
}

void articulo::mostrararticulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
}