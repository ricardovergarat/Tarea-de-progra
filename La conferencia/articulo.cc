# include <iostream>
# include <vector>

# include "articulo.h"
# include "autor.h"

using namespace std;

articulo::articulo(string _titulo, string _resumen, string _cuerpo, string _aprobado, int _nota,string _comentario){
	titulo = _titulo;
	resumen = _resumen;
	cuerpo = _cuerpo;
	aprobado = _aprobado;
	nota = _nota;
	comentario = _comentario;
}

void articulo::mostrar_articulo(){
	cout << "Titulo: " << titulo << endl;
	cout << "Resumen: " << resumen << endl;
	cout << "Cuerpo: " << cuerpo << endl;
	cout << "Aprobado: " << aprobado << endl;
	cout << "Comentario: " << comentario << endl;
	cout << "Nota: " << nota << endl;
}

void articulo::agregar_autor(autor un_autor){
	los_autores.push_back(un_autor);
}

void articulo::mostrar_autor_principal(){
	if ( los_autores.size()  == 0){
		cout << "Este articulo no tiene ningun autor" << endl;
	}else{
		cout << "Autor principal: " << los_autores[0].get_nombre() << endl;
	}
}
