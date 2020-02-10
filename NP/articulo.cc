# include <iostream>

# include "articulo.h"

using namespace std;

articulo::articulo(string _titulo, string _resumen, string _cuerpo, vector <string> _comentarios, vector <int> _notas ){
	titulo = _titulo;
	resumen = _resumen;
	cuerpo = _cuerpo;
	notas = _notas;
	comentarios = _comentarios;
}

void articulo::mostrar_articulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
	cout << "Cuerpo: " << cuerpo << endl;
	int x = 0;
	while ( x < 3){
		cout << "comentario " << x + 1 << ":" << endl;
		cout << comentarios[x] << endl;
		cout << "Nota " << x + 1 << ": " << notas[x] << endl;
		x = x + 1;
	}
	cout << "Nota promedio: " << ( (notas[0] + notas[1] + notas[2])/3 ) << endl;
}
/*
void articulo::agregar_autor(autor un_autor){
	los_autores.push_back(un_autor);
}
*/
