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
		string aprobado;
		int nota;
		string comentario;
		vector <autor> los_autores;
	public:
		articulo(string,string,string,string,int,string);
		void mostrar_articulo();
		void agregar_autor(autor);
		void mostrar_autor_principal();
};

# endif
