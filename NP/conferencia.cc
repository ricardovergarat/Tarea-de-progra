# include <iostream>

# include "conferencia.h"
# include "chair.h"
# include "revisor.h"
# include "autor.h"
# include "articulo.h"

using namespace std;

conferencia::conferencia(string _nombre,string _fecha_inicio, string _fecha_termino, string _pais, string _ciudad){
	nombre = _nombre;
	fecha_inicio = _fecha_inicio;
	fecha_termino = _fecha_termino;
	pais = _pais;
	ciudad = _ciudad;
}	

void conferencia::mostrar_conferencia(){
	cout << "Nombre: " << nombre << endl;
	cout << "fecha de inicio: " << fecha_inicio << endl;
	cout << "fecha de termino: " << fecha_termino << endl;
	cout << "pais: " << pais << endl;
	cout << "ciudad: " << ciudad << endl;
}


void conferencia::agregar_chair(chair un_chair){
	if ( los_chair.size() >= 2 ){
		cout << "La conferencia ya tiene sus 2 chair" << endl;
	}else{
		los_chair.push_back(un_chair);
	}
}

void conferencia::agregar_grupo_chair(chair ch1, chair ch2){
	los_chair.push_back(ch1);
	los_chair.push_back(ch2);
}

void conferencia::mostrar_sus_chair(){
	int x = 0;
	while ( x < los_chair.size() ){
		cout << "Nombre: " << los_chair[x].get_nombre() << endl;
		x = x + 1;
	}
}

void conferencia::agregar_revisor(revisor un_revisor){
	if ( los_revisores.size() >= 3 ){
		cout << "La conferencia ya tiene sus 3 revisores" << endl;
	}else{
		los_revisores.push_back(un_revisor);
	}
}

void conferencia::agregar_grupo_revisor(revisor r1, revisor r2, revisor r3){
	los_revisores.push_back(r1);
	los_revisores.push_back(r2);
	los_revisores.push_back(r3);
}

void conferencia::mostrar_sus_revisores(){
	int x = 0;
	while ( x < los_revisores.size() ){
		cout << "Nombre: " << los_revisores[x].get_nombre() << endl;
		x = x + 1;
	}
}

void conferencia::agregar_articulo(articulo un_articulo){
	articulos_resividos.push_back(un_articulo);
}


void conferencia::agregar_grupo_articulos(vector <articulo> varios_articulos,int a,int b,int c,int d,int e,int f){
	articulos_resividos.push_back(varios_articulos[a]);
	articulos_resividos.push_back(varios_articulos[b]);
	articulos_resividos.push_back(varios_articulos[c]);
	articulos_resividos.push_back(varios_articulos[d]);
	articulos_resividos.push_back(varios_articulos[e]);
	articulos_resividos.push_back(varios_articulos[f]);
}

void conferencia::mostrar_articulos_resividos(){
	int x = 0;
	while ( x < articulos_resividos.size() ){
		articulos_resividos[x].mostrar_articulo();
		x = x + 1;
	}
	
}

void conferencia::agregar_articulo_final(articulo un_articulo){
	articulos_finales.push_back(un_articulo);
}

void conferencia::agregar_grupo_articulos_finales(vector <articulo> varios_articulos, int a, int b){
	articulos_finales.push_back(varios_articulos[a]);
	articulos_finales.push_back(varios_articulos[b]);
}

void conferencia::mostrar_articulos_finales(){
	int x = 0;
	while ( x < articulos_finales.size() ){
		articulos_finales[x].mostrar_articulo();
		x = x + 1;
	}
}
