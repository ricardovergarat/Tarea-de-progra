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
		autor su_autor;
	public:
		articulo(string,string,string,string,int,string);
		void mostrar_articulo();
};

# endif
