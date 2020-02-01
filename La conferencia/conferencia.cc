# include <iostream>

# include "conferencia.h"
# include "revisor.h"

using namespace std;

conferencia::conferencia(string _fecha_inicio, string _fecha_termino, string _pais, string _ciudad,revisor _un_revisor){
	fecha_inicio = _fecha_inicio;
	fecha_termino = _fecha_termino;
	pais = _pais;
	ciudad = _ciudad;
	un_revisor = _un_revisor;
}	

void conferencia::mostrar_conferencia(){
	cout << "fecha de inicio: " << fecha_inicio << endl;
	cout << "fecha de termino: " << fecha_termino << endl;
	cout << "pais: " << pais << endl;
	cout << "ciudad: " << ciudad << endl;
	un_revisor.mostrar_persona();
}
