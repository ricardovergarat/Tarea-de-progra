# include "conferencia.h"

using namespace std;

conferencia::conferencia(string _fecha_inicio, string _fecha_termino, string _pais, string _ciudad){
	fecha_inicio = _fecha_inicio;
	fecha_termino = _fecha_termino;
	pais = _pais;
	ciudad = _ciudad;
	
}

void conferencia::mostrar_conferencia(){
	cout << "Fecha de inicio: " << fecha_inicio << endl;
	cout << "Fecha de termino: " << fecha_termino << endl;
	cout << "Pais: " << pais << endl;
	cout << "Ciudad: " << ciudad << endl;
} 