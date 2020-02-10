# ifndef ARTICULO_H
# define ARTICULO_H

# include <vector>

# include "autor.h"

using namespace std;

class articulo{
	private:
		string titulo;
		string resumen;
		string cuerpo;
	public:
		vector <int> notas;
		vector <string> comentarios;
		//vector <autor> los_autores;
	public:
		articulo(string,string,string,vector <string>,vector <int>);
		void mostrar_articulo();
		//void agregar_autor(autor);
};

# endif
